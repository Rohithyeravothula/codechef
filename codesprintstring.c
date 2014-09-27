#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1500];
        int a[26]={0};
        scanf("%s",s);
        int c,p,l=strlen(s),i;
        for(i=0;i<l;i++)
        {
            a[s[i]-'a']++;
        }
        c=0;
        int f=0;
        for(i=0;i<26;i++)
            if(a[i]!=0)
            f++;
        p=l/f;
        for(i=0;i<26;i++)
            printf("%d ",a[i]);
        printf("\n");
        for(i=0;i<l;i++)
            if(p>a[i])
            c=c+(p-a[i]);
        printf("%d\n",c);
    }
    return 0;
}
