t=input()
while(t>0):
	t=t-1
	x=raw_input()
	b=[]
	b=x.split()
	l=len(b)
	i=l-1
	a=[]
	while(i>=0):
		a.append(b[i])
		i=i-1
	s=""
	for i in range(0,l):
		s=s+a[i]+" "
	print s