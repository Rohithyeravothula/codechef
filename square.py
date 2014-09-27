a=[]
i=0
while True:
	if i*i<=10**10:
		a.append(i*i)
		i=i+1
	else:
		break
l=len(a)
t=input()
while(t):
	t=t-1
	n=input()
	c=0
	i=0
	while(a[i]<n):
		j=i
		while(a[j]<n):
			k=j
			while(a[k]<n):
				r=k
				while(a[r]<n):
					if a[i]+a[j]+a[k]+a[r]==n:
						c=c+1
					r=r+1
				k=k+1
			j=j+1
		i=i+1
	print c