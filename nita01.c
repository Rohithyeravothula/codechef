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
    int n,m,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=0;
    int p=0;
    for(i=0;i<n;i++)
        {m=fastio();
        int d=0;
        for(j=0;j<n;j++)
        if(a[j]==m)
        {d=1;
        break;}
        if(d==0)
        {a[p]=m;
        p=p+1;}
        }
    int c=0;
    for(i=0;i<n;i++)
        if(a[i]==0)
        c++;
    printf("%d\n",c);
}
