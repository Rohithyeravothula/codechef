#include<stdio.h>
#include<string.h>
#include<ctype.h>
int ch(char *a,int l)
{
    int i;
    for(i=0;i<l;i++)
    if(isdigit(a[i])==0)
    return 0;
    return 1;
}
main()
{
    int l;
    char s[20];
while(1)
{
    scanf("%s",s);
    l=strlen(s);
    printf("%d\n",ch(s,l));
}
return 0;
}
