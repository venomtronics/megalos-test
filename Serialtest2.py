import serial
from time import sleep
port=serial.Serial('COM3',9600)
while True:
  port.write(b'1')
  sleep(5)
  port.write(b'1')
  sleep(5)