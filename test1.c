#include<stdio.h>
long int dol(long int);
main()
{
long int a;
int b[10];
int t;

for(t=0;t<10;t++)
{
    scanf("%ld",&a);
    b[t]=dol(a);
}
for(t=0;t<10;t++)
    printf("%ld\n",b[t]);
return 0;
}
long int dol(long int n)
{
long int c;
c=n;
if(c<((c/2)+(c/3)+(c/4)))
    return dol(c/2)+dol(c/3)+dol(c/4);
else
    return c;
}
