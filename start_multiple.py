import os
import threading
import time
 
def startRV():
    os.system("ros2 run vehicle remote_vehicle")

number_of_rvs = 0
number_of_rvs = int(input("Enter the number of times the function should be executed:\n").strip())

threads = []
for i in range(number_of_rvs):    
    t = threading.Thread(target=startRV)
    t.start()
    print("Vehicle Thread Created.")
    time.sleep(10)
    threads.append(t)
    

