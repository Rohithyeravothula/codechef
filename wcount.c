#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[556];
        scanf("%s",s);
        int i,j,l=strlen(s);
        int a[200]={0};
        for(i=0;i<l;i++)
            a[s[i]]++;
        int c=0;
        for(i=0;i<200;i++)
            if(a[i]!=0)
            c++;

    }
}
