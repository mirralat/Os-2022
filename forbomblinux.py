import os
import time
 
while True:
  os.fork()
  os.system("ps -ef | wc -l")
  time.sleep(1)
