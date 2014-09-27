t=input()
while(t):
	t=t-1
	x=raw_input()
	n,m=map(int,x.split())
	a=[]
	for i in range(0,n):
		b=[]
		x=raw_input()
		l=len(x)
		for j in range(0,l):
			b.append(int(x[j]))
		a.append(b)
	x=0
	for i in range(0,m):
		b=[]
		for j in range(0,n):
			c=[]
			for k in range(0,m):
				if k!=i:
					c.append(a[j][k])
			b.append(c)
		d=0
		for j in range(0,n):
			for k in range(j+1,n):
				if a[j]==a[k]:
					#print "equal at ",b[j],b[k],i
					d=1
					break
			if d==1:
				break
		if d==0:
			break
		#print b
	if d==0:
		print "Yes"
	else:
		print "No"
	