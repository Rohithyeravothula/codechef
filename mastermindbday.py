a=[]
def primes(n): 
	if n==2: return [2]
	elif n<2: return []
	s=range(3,n+1,2)
	mroot = n ** 0.5
	half=(n+1)/2-1
	i=0
	m=3
	while m <= mroot:
		if s[i]:
			j=(m*m-3)/2
			s[j]=0
			while j<half:
				s[j]=0
				j+=m
		i=i+1
		m=2*i+3
	return [2]+[x for x in s if x]
a=[]
a=primes(10**6)
t=input()
l=len(a)
while t:
	t=t-1
	x=raw_input()
	L,R=map(int,x.split())
	for i in range(0,l):
		if a[i]>=L:
			break
	c=0
	for j in range(i,l):
		if a[j]<=R:
			c=c+1
	print R-L+1-c