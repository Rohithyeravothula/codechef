#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char p1[40020],p2[40020];
        int p[26]={0};
        int c[26]={0};
        char ch[40020];
        int n,i,j;

        scanf("%s %s",p1,p2);
        int k;
        int l1=strlen(p1);
        int l2=strlen(p2);
        for(i=0;i<l1;i++)
            p[(int)p1[i]-'a']++;
        for(i=0;i<l2;i++)
            p[(int)p2[i]-'a']++;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%s",ch);
            int c1=strlen(ch);
            for(j=0;j<c1;j++)
                c[(int)ch[j]-'a']++;
        }
        int d=0;
        for(i=0;i<26;i++)
            if(c[i]>p[i])
            {d=1;
            break;
            }
        if(d==0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
