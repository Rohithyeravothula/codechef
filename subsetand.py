t=input()
while(t):
	t=t-1
	x=raw_input()
	z,n=map(int,x.split())
	a=[]
	x=raw_input()
	a=map(int,x.split())
	l=len(a)
	b=[]
	for i in range(0,l):
		b.append(z&a[i])
	d=0
	for i in range(0,l):
		if b[i]==0:
			d=1
			break
	if d==1:
		print "Yes"
	else:
		print "No"
