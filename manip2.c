#include<stdio.h>
inline int fastio()
{
     int t=0;
     char ch;
     ch=getchar_unlocked();
     while(ch<'0'||ch>'9')
     ch=getchar_unlocked();
     while(ch<='9'&& ch>='0')
     {
                     t=(t<<3)+(t<<1)+ch-'0';
                     ch=getchar_unlocked();
     }
     return t;
}

main()
{
   int t;
   t=fastio();
   while(t--)
   {
       int n,j,i,p,s;
       n=fastio();
       int a[20]={0};
       j=0;
       while(n)
       {
           a[j]=n%2;
           n=n/2;
           j++;
       }
       p=5;
       s=0;
       for(i=0;i<j;i++)
           {s=s+p*a[i];
           p=p*5;}
       printf("%d\n",s);
   }
}
