#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[1000];
        scanf("%s",a);
        int s=0;
        int i,l=strlen(a);
        for(i=0;i<l;i++)
            s=s+a[i];
        printf("%c\n",s/l);
    }
    return 0;
}
