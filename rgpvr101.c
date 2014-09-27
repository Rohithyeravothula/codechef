#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[60];
        scanf("%s",s);
        int i,k,n;
        n=strlen(s);
        k=(strlen(s)/2)-1;
        for(i=k;i>=0;i--)
            printf("%c",s[i]);
        for(i=n-1;i>k;i--)
            printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}
