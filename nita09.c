#include<stdio.h>
#include<string.h>
main()
{
    int t,i,c;
    char s[51];
    scanf("%d",&t);
    c=0;
    scanf("%s",s);
    for(i=1;i<t;i++)
        if(s[i]==s[i-1])
            c++;
    printf("%d\n",c);
    return 0;
}
