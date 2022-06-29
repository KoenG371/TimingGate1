import sys
import RPi.GPIO as GPIO
import time

signal = 14

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(signal, GPIO.IN)

while True:
    if GPIO.input(14):
        print(GPIO.input(14))
        time.sleep(1)
        