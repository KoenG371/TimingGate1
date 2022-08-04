# importing libraries
from PyQt5.QtWidgets import * 
from PyQt5 import QtCore, QtGui
from PyQt5.QtGui import * 
from PyQt5.QtCore import * 
import sys
import threading
import time, random
import os
import RPi.GPIO as GPIO

SIGNAL = 14

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(SIGNAL, GPIO.IN)

# QThread class to process GPIO interrupt
class CrossingCheckerThread(QThread):

    def __init__(self, window, parent=None):
        super().__init__(parent)
        self.window = window
        GPIO.add_event_detect(SIGNAL, GPIO.RISING)

    def __del__(self):
        self.wait()

    def run(self):
        counter = 1
        self.running = True
        while self.running:
            counter += 1
            print("checking", counter)
            if GPIO.event_detected(SIGNAL):
                self.window.flag = False
                self.running = False
            else:
                time.sleep(.5)
        
  
class Window(QMainWindow):
  
    def __init__(self):
        super().__init__()
  
        # this will hide the title bar
        self.setWindowFlag(Qt.FramelessWindowHint)
        
        # setting title
        self.setWindowTitle("Timing-Gate.com")
  
        # setting geometry
        self.setGeometry(100, 100, 400, 500)
  
        # calling method
        self.UiComponents()
        
        self.checker = CrossingCheckerThread(window=self)
  
        # showing all the widgets
        self.show()
        
    def closeEvent(self, event):
        # stop the thread and delete
        if self.checker.isRunning():
            self.checker.quit()
        del self.checker
        super(Window, self).closeEvent(event)
        
  
    # method for widgets
    def UiComponents(self):
  
        # counter
        self.count = 0
  
        # creating flag
        self.flag = False
  
        # creating a label to show the time
        self.label = QLabel(self)
  
        # setting geometry of label
        self.label.setGeometry(75, 100, 250, 70)
  
        # adding border to the label
        self.label.setStyleSheet("border : 4px solid black;")
  
        # setting text to the label
        self.label.setText(str(self.count))
  
        # setting font to the label
        self.label.setFont(QFont('Arial', 25))
  
        # setting alignment to the text of label
        self.label.setAlignment(Qt.AlignCenter)
  
        # creating start button
        start = QPushButton("Start", self)
  
        # setting geometry to the button
        start.setGeometry(125, 250, 150, 40)
  
        # add action to the method
        start.pressed.connect(self.Start)
  
        # creating pause button
        pause = QPushButton("Stop", self)
  
        # setting geometry to the button
        pause.setGeometry(125, 300, 150, 40)
  
        # add action to the method
        pause.pressed.connect(self.Pause)
  
        # creating reset button
        re_set = QPushButton("Re-set", self)
  
        # setting geometry to the button
        re_set.setGeometry(125, 350, 150, 40)
  
        # add action to the method
        re_set.pressed.connect(self.Re_set)
  
        # creating a timer object
        timer = QTimer(self)
  
        # adding action to timer
        timer.timeout.connect(self.showTime)
  
        # update the timer every millisecond
        timer.start(10)
        
        # maximize the window
        self.showMaximized()
  
    # method called by timer
    def showTime(self):
  
        # checking if flag is true
        if self.flag:
  
            # incrementing the counter
            self.count+= 1
  
        # showing text
        self.label.setText(format(self.count / 100, '.2f'))
  
  
    def Start(self):
        self.checker.start()
        # making flag to true
        self.flag = True
  
    def Pause(self):
        self.checker.running = False
        # making flag to False
        self.flag = False
  
    def Re_set(self):
        self.checker.running = False
        # making flag to false
        self.flag = False
  
        # reseeting the count
        self.count = 0
  
        # setting text to label
        self.label.setText(str(self.count))
  
  
# create pyqt5 app
App = QApplication(sys.argv)
  
# create the instance of our Window
window = Window()
  
# start the app
sys.exit(App.exec())