#include<stdio.h>
#include<string.h>
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
    int n,m,i,j,x;
    char s[100020];
    n=fastio();
    m=fastio();
    scanf("%s",s);
    int a[10]={0};
    int p[100010]={0};
    for(i=0;i<n;i++)
    {
        int k=s[i]-'0';
        int v=0;
        for(j=0;j<10;j++)
            v=v+abs(k-j)*a[j];
        p[i]=v;
        a[k]++;
    }
    for(i=0;i<m;i++)
    {
        x=fastio();
        printf("%d\n",p[x-1]);
    }
    return 0;
}
