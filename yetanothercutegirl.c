#include<stdio.h>
#include<math.h>
#define M 1000005
int ch(long long int n,long long int m)
{
    int a[M],b[M],i,j,l,p,q,s;
    s=m-n;
    for(i=0;i<=s;i++)
    {a[i]=n+i;
    b[i]=1;}
    q=(int)sqrt(m)+1;
    p=2;
    while(p<q)
    {
        j=0;
        while(j<s)
        {if(p!=a[j] && a[j]%p==0)
        break;
        j++;
        }
        l=j;
        while(l<m)
        {
            b[l]=0;
            l=l+p;
        }
        p++;
    }
    int c=0;
    for(i=0;i<m;i++)
    if(b[i]==1)
    {c++;
    }
    if(b[0]==1)
    c--;
    return c;
}
int psq(long long int n)
{
    int m=(int)sqrt(n);
    if(m*m==n)
    return 1;
    else
    return 0;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int n,m,c;
    scanf("%lld %lld",&n,&m);
    c=ch(n,m)+(int)sqrt(m)-(int)sqrt(n);
    if(psq(n)==1 && psq(m))
    c++;
    printf("%lld\n",c);
    }
    return 0;
}
