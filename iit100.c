#include<stdio.h>
#include<stdlib.h>
main()
{
int n,p,w,k;
char m[20];
scanf("%d %d\n",&n,&k);
long long int s=0;
p=n-k;
while(p--)
    {gets(m);
    w=atoi(m);
    printf("%d\n",w);
    s=s-w;}
while(k--)
    {gets(m);
    w=atoi(m);
    s=s+w;}
printf("%lld\n",s);
return 0;
}
