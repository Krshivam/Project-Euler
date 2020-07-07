a = 3
b = 2

cnt = 0;

x = 1
def f(x,y):
	cnta=0;
	cntb=0;
	while(x):
		x=x//10
		cnta+=1
	while(y):
		cntb+=1
		y= y//10
	return cnta>cntb


while(x<=1000):
	temp = a+2*b
	b = a+b
	a = temp
	if(f(a,b)):
		cnt+=1;
	x+=1

print(cnt)
