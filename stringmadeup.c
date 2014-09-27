#include<stdio.h>
#include<string.h>
main()
{
    int p[10]={6,2,5,5,4,5,6,3,7,6};
    char s[150];
    scanf("%s",s);
    int l=strlen(s);
    int i,c=0;
    for(i=0;i<l;i++)
    c=c+p[s[i]-'0'];
    printf("%d\n",c);
    return 0;
}
