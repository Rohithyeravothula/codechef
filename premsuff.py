t=input()
while(t>0):
	t=t-1
	x=raw_input()
	n,m=map(int,x.split())
	a=[]
	x=raw_input()
	a=x.split()
	l=len(a)
	for i in range(0,l):
		a[i]=int(a[i])
	b=[]
	m1=m
	while(m1):
		m1=m1-1
		x=raw_input()
		t1,t2=x.split()
		t1=int(t1)
		t2=int(t2)
		b.append([t1,t2])
	c=[]
	b.sort()
	i=0
	e=[]
	for i in range(0,n):
		e.append(0)
	for i in range(0,m):
		for j in range(b[i][0]-1,b[i][1]):
			e[j]=1
	z=0
	for i in range(0,n):
		if e[i]==0 and a[i]!=i+1:
			z=1
			break
	if z==0:
		d=[]
		for i in range(0,n):
			if e[i]==1:
				d.append(a[i])
			else:
				d.sort()
				f=[]
				l=len(d)
				for j in range(0,l):
					if d[j]!=j-l:
						z=1
						break
				d=[]
			if z==1:
				break
	if z==0:
		print "Possible"
	else:
		print "Impossible"



		
