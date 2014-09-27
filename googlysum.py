n=input()
a=[]
x=raw_input()
a=map(int,x.split())
l=len(a)
b=[]
d=[]
c=[]
for i in range(0,l):
	b.append(3*a[i])
	c.append(2*a[i])
	d.append(0)

for i in range(0,l):
	for j in range(0,i):
		if a[i]==b[j]:
			d[i]=1
			break
for i in range(0,l):
	if d[i]==0:
		for j in range(0,i):
			for k in range(0,i):
				if d[i]==c[j]+a[k]:
					d[i]=0
					break

for i in range(0,l):
	if d[i]==0:
		for j in range(0,i):
			for k in range(0,i):
				for p in range(0,i):
					if a[j]+a[k]+a[p]==a[i]:
						d[i]=1
						break
s=0
for i in range(0,l):
	if d[i]==1:
		s=s+1
print s


