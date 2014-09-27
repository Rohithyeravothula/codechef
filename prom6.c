#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char s[1020];
        gets(s);
        int i,l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]>='a' && s[i]<='h')
                printf("%c",s[i]+18);
            else if(s[i]>='i' && s[i]<='r')
                printf("%d",s[i]-'i');
            else if(s[i]>='s' && s[i]<='z')
                printf("%c",s[i]-18);
            else if(s[i]>='0' && s[i]<='9')
                printf("%c",'i'+(int)s[i]-'0');
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
