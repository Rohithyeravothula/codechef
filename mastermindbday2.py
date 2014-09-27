import math
def ch(n):
	m=int(math.sqrt(n)+1)
	for i in range(2,m):
		if n%i==0:
			return  0
	return 1
t=input()
while t:
	t=t-1
	x=raw_input()
	L,R=map(int,x.split())
	c=0
	for i in range(L,R+1):
		if ch(i)==1:
			c=c+1
	print R-L+1-c
		
