#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000];
        scanf("%s",s);
        int i,p;
        p=0;
        for(i=0;i<strlen(s);i++)
            p=p+s[i];
        p=p/strlen(s);
        printf("%c\n",p);

    }
    return 0;
}
