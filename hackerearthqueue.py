t=input()
while(t>0):
	t=t-1
	n=input()
	x=raw_input()
	a=[]
	a=map(int,x.split())
	s=0
	l=len(a)
	for i in range(0,l):
		s=s+a[i]
	d=input()
	d=d%s;
	if d==0:
		print n
	else:
		for i in range(0,l):
			d=d-a[i]
			if d<=0:
				print i+1
				break
