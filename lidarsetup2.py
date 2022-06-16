from machine import UART, Pin
import time
import utime
#Define receiving interface of Lidar

def wait_for_crossing(min_count=5)
    uart = UART(2, baudrate=115200)  #Define printing interface
    counter = 0
    
    while True:
    temp = bytes()
    if UART.any() > 0:
        temp += UART.read(9)
        try:
            if temp[0] == 0x59 and temp[1] == 0x59 :
                distance = temp[2] + temp[3] * 256             #Get distance value  
                UART.write(temp)
                if distance < 200:
                    counter += 1
                    if counter > min_count:
                        nrf.send(struct.pack("i", state))
                else:
                    counter = 0 
        except IndexError:
            pass
    

   