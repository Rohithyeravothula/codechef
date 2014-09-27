#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}
int ld(int n)
{
 int u;
u=(int)sqrt(n)+2;
int k=0;
int i;
for(i=2;i<u;i++)
if(n%i==0)
{printf("%d\n",i);
k=1;
break;}
if(k==0)
printf("%d\n",n);
}
main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(n!=1)
    {
        int r;
        r=gcd(a[0],a[1]);
        for(i=0;i<n;i++)
            r=gcd(a[i],r);
        if(r==1)
            printf("-1\n");
        else
        ld(r);
    }
    else
        {
            if(a[0]==1)
                printf("-1\n");
            else
                ld(a[0]);
        }
}
return 0;
}
