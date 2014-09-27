#include<stdio.h>
#include<math.h>
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
    int a[12]={0,0,0,0,0,0,1,4,11,28,68};
    for(i=0;i<10;i++)
    {
        n=fastio();
        m=(int)log2(n);
        printf("%d\n",a[m]);
    }
    return 0;
}
