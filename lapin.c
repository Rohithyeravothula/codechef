#include<stdio.h>
#include<string.h>
main()
{
    int t,i,l,d,k;
    scanf("%d",&t);
    while(t--)
    {
        char s[1010];
        int a[26]={0};
        int b[26]={0};
        scanf(" %s",s);
        for(i=0;i<strlen(s);i++)
        a[(int)s[i]-97]++;
        d=0;
        if(strlen(s)%2==1)
            d=1;
        l=strlen(s);
        for(i=0;i<l/2;i++)
        b[(int)s[i]-97]++;
        for(i=0;i<26;i++)
        b[i]=2*b[i];
        if(d==1)
            b[(int)s[l/2]-97]++;
        k=0;
        for(i=0;i<26;i++)
         if(a[i]!=b[i])
         {
           k=1;
           break;
         }
        if(k==1)
            printf("NO\n");
        else if (k==0)
            printf("YES\n");
    }
    return 0;
}
