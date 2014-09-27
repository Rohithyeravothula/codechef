from fractions import gcd
import math
def ch(n):
	if n==0:
		return 1
	x=1
	s=1
	while(s<=n):
		if s!=n:
			s=s*x
			x=x+1
		else:
			return 1
	return 0
def pp(i,j):
	if i*j==0:
		return 1
	else:
		return gcd(i,j)

n=input()
c=0
for i in range(0,n+1):
	for j in range(i+1,n+1):
		if pp(i,j)==1 and ch(i*j)==1:
			c=c+1
			print i,j
print c