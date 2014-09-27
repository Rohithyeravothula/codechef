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
    int n,m,i;
    scanf("%d",&n);
    int a[100050]={0};
    for(i=0;i<n;i++)
        {m=fastio();
        a[m]=1;}
    for(i=0;i<100050;i++)
        if(a[i]==1)
        n--;
    printf("%d\n",n);
}

