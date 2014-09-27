#include<stdio.h>
main()
{
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        char s1[100],s2[100];
        scanf("%s %s",s1,s2);
        int a[26]={0};
        int b[26]={0};
        for(i=0;i<strlen(s1);i++)
            a[(int)s1[i]-'a']++;
        for(i=0;i<strlen(s2);i++)
            b[(int)s2[i]-'a']++;
        int d=0,k=0;
        if(strlen(s1)!=strlen(s2))
            for(i=0;i<26;i++)
                {if(a[i]>b[i])
                d=1;
                if(a[i]<b[i])
                    k=1;
                }
        else
            for(i=0;i<26;i++)
            if(a[i]!=b[i])
                {d=1;
                k=1;
                }

        if((d==1) && (k==1))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
