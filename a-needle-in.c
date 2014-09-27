#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j;
        char a[1020],b[1000010];
        scanf("%s %s",a,b);
        int l=strlen(a);
        int p[26]={0};
        for(i=0;i<l;i++)
            p[a[i]-'a']++;
        l=strlen(b);
        int k=strlen(a);
        int z=0;
        for(i=0;i<l;i++)
           if(p[b[i]-'a']!=0)
        {
        int v[26]={0};
        for(j=i;j<k;j++)
            v[b[i]-'a']++;
        for(j=0;j<26;j++)
            if(p[i]!=v[i])
            break;
        if(j==26)
        {printf("YES\n");
        z=1;
        goto aa;
        }
        }
        aa:
            if(z==0)
                printf("NO\n");
    }
    return 0;
}
