import os
import time
from datetime import date
from tqdm import trange

while(1):
	for _ in trange(1800):
		time.sleep(1)
	os.system('git add -A')
	os.system('git commit -m "'+str(date.today())+'"')
	os.system('git push')