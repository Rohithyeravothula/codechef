#include<stdio.h>
#include<string.h>
char s[400]={' '};

char ch()
{
    int a[26]={0};
   int i,l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(64<s[i]&&s[i]<91)
                a[s[i]-65]=1;
            else if(s[i]>96&&s[i]<123)
                a[s[i]-97]=1;
        }
    char c='~';
        for(i=0;i<27;i++)
            if((a[i]==0))
            {c=97+i;
            break;
            }
    return c;

}
main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        gets(s);
        printf("%c\n",ch());
    }
    return 0;
}
