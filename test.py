def getbit(n,m):
	return (n>>(m-1))&1

while True:
	x=raw_input()
	n,m=map(int,x.split())
	print getbit(n,m)

