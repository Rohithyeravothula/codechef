#include<stdio.h>
char s[1000005];
main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%s",s);
        int i,l=strlen(s),c=0;
        for(i=0;i<l;i++)
            if(s[i]!='4' && s[i]!='7')
            c++;
        printf("%d\n",c);
    }
    return 0;
}
