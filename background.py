import os
import time
from datetime import date

while(1):
	os.system('git add -A')
	os.system('git commit -m "'+str(date.today())+'"')
	os.system('git push')
	time.sleep(1800)