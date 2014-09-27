#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[20];
        scanf("%s",s);
        int i,l=strlen(s),u=0;
        for(i=0;i<l;i++)
        {
            if(s[i]!=s[l-i-1])
            {
                u=1;
                break;
            }
        }
        if(u==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
