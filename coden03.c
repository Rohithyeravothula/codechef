#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10050],r[10050];
        scanf("%s %s",s,r);
        int i,l,a[26]={0},b[26]={0};
        l=strlen(s);
        for(i=0;i<l;i++)
            a[s[i]-'A']++;
        l=strlen(r);
        for(i=0;i<l;i++)
            b[r[i]-'A']++;
        for(i=0;i<26;i++)
            if(a[i]!=b[i])
            {printf("NO\n");
            break;}
        if(i==26)
            printf("YES\n");
    }
    return 0;
}
