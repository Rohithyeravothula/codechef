import math
def primes(n):
    primfac = []
    freq=[]
    d = 2
    while d*d <= n:
        c=0
        while (n % d) == 0:
            primfac.append(d)
            n /= d
            c=c+1
        freq.append(c)
        d += 1
    if n > 1:
       primfac.append(n)
       freq.append(1)
    return primfac

t=input()
while(t>0):
    t=t-1
    x=raw_input()
    a,b,c,d=map(int,x.split())
    p=primes(a)
    q=primes(c)
    l=len(p)
    if l>1 and p[l-2]==p[l-1]:
        del p[l-1]
    l=len(q)
    if l>1 and q[l-2]==q[l-1]:
        del q[l-1]
    fp=[]
    fq=[]
    l=len(p)
    for i in range(0,l):
        m=a
        g=0
        while(m%p[i]==0):
            m=m/p[i]
            g=g+1
        fp.append(g)
    l=len(q)
    for i in range(0,l):
        m=c
        g=0
        while(m%q[i]==0):
            m=m/q[i]
            g=g+1
        fq.append(g)
    d=0
    i=0
    j=0
    for i in range(0,len(q))
    while()
    if d==0:
        print "Divisible"
    else:
        print "Not divisible"
        




