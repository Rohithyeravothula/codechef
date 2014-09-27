#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,a[26]={0};
        char s[10010];
        scanf("%s",s);
        int l=strlen(s);
        for(i=0;i<l;i++)
            a[s[i]-'a']++;
        int c=0;
        for(i=0;i<26;i++)
            if(a[i]>c)
            c=a[i];
        printf("%d\n",c);
    }
    return 0;
}
