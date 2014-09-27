#include<stdio.h>
#include<string.h>
#define M 1000000007
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
        char s[100010];
        scanf("%s",s);
        int l=strlen(s);
        int i;
        long long int p=1;
        i=0;
        while(i<l)
        {
            if(s[i]=='l')
                p=(2*p)%M;
            if(s[i]=='r')
                p=(2*(p+1))%M;
            if(i>=l-1)
                break;
            i++;
            if(s[i]=='l')
                p=(2*p-1)%M;
            if(s[i]=='r')
                p=(2*p+1)%M;
            i++;
        }
        printf("%lld\n",p);
    }
    return 0;
}
