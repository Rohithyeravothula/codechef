#include<stdio.h>
#include<string.h>
main()
{
    int t,i,p;
    scanf("%d",&t);
    while(t--)
    {
        char s[5000];
        scanf("%s",&s);
        p=0;
        for(i=0;i<strlen(s);i++)
            p=p+(int)s[i];
        printf("%c\n",(p/strlen(s)));
    }
    return 0;
}
