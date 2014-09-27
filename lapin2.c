#include<stdio.h>
#include<string.h>
main()
{
    int t,i,d,L;
    scanf("%d",&t);
    while(t--)
    {
        char s[1020];
        int l[26]={0};
        int r[26]={0};
        scanf("%s",s);
        L=strlen(s);
        for(i=0;i<L/2;i++)
            l[(int)s[i]-97]++;
        for(i=(L+1)/2;i<strlen(s);i++)
            r[(int)s[i]-97]++;
        d=0;
        for(i=0;i<26;i++)
            if(l[i]!=r[i])
        {
            d=1;
            break;
        }
        if(d==0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;

}
