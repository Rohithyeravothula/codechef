#include<stdio.h>
main()
{
   long long int n,k,i,d,p,c;
   scanf("%lld %lld %lld",&n,&k,&d);
   for(i=0;i<d;i++)
   {
       p=i*(i+1)/2;
       if(p==n)
        c=c+1;
   }
}
