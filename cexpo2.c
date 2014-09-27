#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[50];
        scanf("%s",s);
        int l=strlen(s);
        int i=1,j,u=0;
        for(i=0;i<l;i++)
        {
            int d=0;
            for(j=0;j<l-i;j++)
                if(s[j]!=s[j+i])
                {d=1;
                break;}
        }
        if(u==1)
        {printf("%yes\n");
        break;}
        else
            printf("no\n");
    }
    return 0;
}
