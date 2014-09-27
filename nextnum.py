import math
t=input()
while t:
	t=t-1
	x=raw_input()
	a=[]
	l=len(x)
	for i in range(0,l):
		a.append(int(x[i]))
	a.sort()
	b=[]
	for i in range(0,l):
		b.append(int(x[i]))
	l=len(a)
	d=[]
	i=0
	k=0
	while i<l:
		c=0	
		for j in range(0,l):
			if a[j]<b[i] and a[j] not in d:
				c=c+1
		k=k+c*math.factorial(l-i-1)
		d.append(b[i])
		i=i+1
	print k+1

