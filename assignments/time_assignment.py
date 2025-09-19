#MW 7th TIME

import time
import datetime

epoch = time.time()
readable_time = time.ctime(epoch)

now = datetime.datetime.now()
hour = now.hour

print(f"Since the time is {hour}")

if hour < 12:
    print(f"Good Morning!")
elif hour <=18:
    print(f"Good Afternoon!")
elif hour >=19:
    print(f"Good Evening!")

















