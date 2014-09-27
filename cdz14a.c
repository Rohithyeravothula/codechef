#include<stdio.h>
#include<string.h>
main()
{
    int t,i,c;
    scanf("%d",&t);
    while(t--)
    {
    char s[10050];
    scanf("%s",s);
    int l=strlen(s);
    c=0;
    for(i=1;i<l;i++)
        if(s[i]==s[i-1])
            c++;
    printf("%d\n",c);
    }
    return 0;
}
