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
    int t;
    t=fastio();
    while(t--)
    {
        char s[2020];
        scanf("%s",s);
        int i,l=strlen(s);

        for(i=l-1;i>=3;i--)
            {
                if(s[i]=='?' && s[i-1]=='?' && s[i-2]=='?' && s[i-3]=='?')
            {
                s[i]='F';
                s[i-1]='E';
                s[i-2]='H';
                s[i-3]='C';
            }
            if(s[i]=='F' && s[i-1]=='E' && s[i-2]=='H' && s[i-3]=='?')
            s[i-3]='C';
            if(s[i]=='F' && s[i-1]=='E' && s[i-2]=='?' && s[i-3]=='C')
            s[i-2]='H';
            if(s[i]=='F' && s[i-1]=='?' && s[i-2]=='H' && s[i-3]=='C')
            s[i-1]='E';
            if(s[i]=='?' && s[i-1]=='E' && s[i-2]=='H' && s[i-3]=='C')
            s[i]='F';
            if(s[i]=='F' && s[i-1]=='E' && s[i-2]=='?' && s[i-3]=='?')
            {
                s[i-3]='C';
                s[i-2]='H';
            }
            if(s[i]=='F' && s[i-1]=='?' && s[i-2]=='H' && s[i-3]=='?')
            {
                s[i-3]='C';
                s[i-1]='E';
            }
            if(s[i]=='?' && s[i-1]=='E' && s[i-2]=='H' && s[i-3]=='?')
            {
                s[i-3]='C';
                s[i]='F';
            }
            if(s[i]=='F' && s[i-1]=='?' && s[i-2]=='?' && s[i-3]=='C')
            {
                s[i-2]='H';
                s[i-1]='E';
            }
            if(s[i]=='?' && s[i-1]=='E' && s[i-2]=='?' && s[i-3]=='C')
            {
                s[i-2]='H';
                s[i]='F';
            }
            if(s[i]=='?' && s[i-1]=='?' && s[i-2]=='H' && s[i-3]=='C')
            {
                s[i-1]='E';
                s[i]='F';
            }
            if(s[i]=='F' && s[i-1]=='?' && s[i-2]=='?' && s[i-3]=='?')
            {
                s[i-3]='C';
                s[i-2]='H';
                s[i-1]='E';
            }
            if(s[i]=='?' && s[i-1]=='E' && s[i-2]=='?' && s[i-3]=='?')
            {
                s[i-3]='C';
                s[i-2]='H';
                s[i]='F';
            }
            if(s[i]=='?' && s[i-1]=='?' && s[i-2]=='H' && s[i-3]=='?')
            {
                s[i-3]='C';
                s[i-1]='E';
                s[i]='F';
            }
            if(s[i]=='?' && s[i-1]=='?' && s[i-2]=='?' && s[i-3]=='C')
            {
                s[i-2]='H';
                s[i-1]='E';
                s[i]='F';
            }

        }
        for(i=0;i<l;i++)
            if(s[i]=='?')
            s[i]='A';
        printf("%s\n",s);
    }
    return 0;
}
