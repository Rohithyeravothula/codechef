n=input()
a=[]
x=raw_input()
a=map(int,x.split())
l=len(a)
s=0
for i in range(0,l):
	d=0
	for j in range(0,i):
		for k in range(0,i):
			for r in range(0,i):
				if a[j]+a[k]+a[r]==a[i]:
					s=s+1
					d=1
					break
				if d==1:
					break
			if d==1:
				break
		if d==1:
			break
print s

