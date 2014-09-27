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

int main()
{
    int t;
    t=fastio();
    scanf("\n");
    while(t--)
    {
        int i;
        char a[1000],s[28];
        gets(a);
        gets(s);
        for(i=0;a[i]!='\0';i++)
        {
        	if(a[i]==' ')
        	printf(" ");
        	else if((a[i]>='A')&&(a[i]<='Z'))
        	{
        		printf("%c",s[a[i]-65]);
        	}
        }
        printf("\n");
    }
    return 0;
}
