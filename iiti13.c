#include<stdio.h>
char s[1000000];
int a[10000000];
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        scanf("%s",s);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            char p;
            p=s[i];
            s[i]=s[a[i]-1];
            s[a[i]-1]=p;
        }
        printf("%s\n",s);
    }
    return 0;
}
