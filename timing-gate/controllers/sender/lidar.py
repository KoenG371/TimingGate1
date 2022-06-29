from machine import UART
from ustruct import struct
#Define receiving interface of Lidar

def wait_for_crossing(nrf, min_count=5):
    uart = UART(2, baudrate=115200)  #Define printing interface
    counter = 0
    
    while True:
        temp = bytes()
        if uart.any() > 0:
            temp += uart.read(9)
            try:
                if temp[0] == 0x59 and temp[1] == 0x59 :
                    distance = temp[2] + temp[3] * 256 # Get distance value  
                    uart.write(temp)
                    if distance < 200:
                        counter += 1
                        if counter > min_count:
                            nrf.send(struct.pack("i", 1))
                            return
                    else:
                        counter = 0 
            except IndexError:
                pass
    
   