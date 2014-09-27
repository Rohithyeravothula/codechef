m=100000000
a=[]
for i in range(0,10):
	a.append(0)


for i in range(0,m):
	s=str(i)
	l=len(s)
	c=0
	for j in range(0,l):
		c=c+int(s[j])
	if c==13:
		a[l-1]=a[l-1]+1
print a

