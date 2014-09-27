#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10100];
        scanf("%s",s);
        int l=strlen(s),i,a[26]={0};
        unsigned long long int p;
        for(i=0;i<l;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                a[s[i]-'a']++;
            else if(s[i]>='A' && s[i]<='Z')
                a[s[i]-'A']=a[s[i]-'A']+2;
        }
        if(a[0]==0)
            a[0]=1;
        if(a[4]==0)
            a[4]=1;
        if(a[8]==0)
            a[8]=1;
        if(a[14]==0)
            a[14]=1;
        if(a[20]==0)
            a[20]=1;
        p=a[0]*a[4]*a[8]*a[14]*a[20];
        printf("%llu\n",p);
    }
    return 0;
}
