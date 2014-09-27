#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100020];
        scanf("%s",s);
        int i=0;
        int c=0;
        int l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='T')
                c--;
            else if(s[i]=='D')
                c++;
        }
        if(c==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
