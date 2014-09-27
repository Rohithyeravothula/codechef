t=input()
x=raw_input()
a=[]
a=map(int,x.split())
d={}
b=[]
l=len(a)
for i in range(0,l):
	if a[i] not in d:
		b.append(a[i])
		d[a[i]]=1
	else:
		d[a[i]]=d[a[i]]+1
r=len(b)
if l-r>=2:
	print "YES"
	p=[]
	for i in range(0,r):
		if d[b[i]]>1:
			p.append(b[i])
			if len(p)==2:
				break
	c=[]
	for i in range(0,l):
		c.append([a[i],i+1])
	c.sort()
	s=""
	for i in range(0,l):
		s=s+str(c[i][1])
		s=s+" "
	print s
	if len(p)==2:
		s=""
		for i in range(0,l):
			if p[0]==c[i][0]:
				break
		c[i],c[i+1]=c[i+1],c[i]
		for i in range(0,l):
			s=s+str(c[i][1])
			s=s+" "
		print s
		for i in range(0,l):
			if p[1]==c[i][0]:
				break
		c[i],c[i+1]=c[i+1],c[i]
		s=""
		for i in range(0,l):
			s=s+str(c[i][1])
			s=s+" "
		print s
	else:
		for i in range(0,l):
			if p[0]==c[i][0]:
				break
		c[i],c[i+1]=c[i+1],c[i]
		s=""
		for j in range(0,l):
			s=s+str(c[j][1])
			s=s+" "
		print s
		c[i],c[i+2]=c[i+2],c[i]
		s=""
		for i in range(0,l):
			s=s+str(c[i][1])
			s=s+" "
		print s



else:
	print "NO"
