import math
def ch(n):
	m=int(math.sqrt(n))+1;
	for i in range(2,m):
		if n%i==0:
			return 0
	return 1
c=1
for i in range(1,31):
	if ch(i)==1:
		c=c*i
print c