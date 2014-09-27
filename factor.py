import math
def ch(n):
    m=int(math.sqrt(n))+1
    a=[]
    while n%2==0:
    	n=n/2
    	a.append(2)
    	#c=c+1
    i=3;
    while(i<m):  	
    	while n%i==0:
   			n=n/i;
   			a.append(i)
   			#c=c+1
    	i=i+2

    if n>2:
    	#c=c+1
    	a.append(n)
    l=len(a)
    print l
    for i in range(0,l):
    	print a[i]



t=input()
while(t):
	t=t-1
	n=input()
	ch(n)