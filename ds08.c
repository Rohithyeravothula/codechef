#include<stdio.h>
#include<string.h>
main()
{
    char s[1000];
    scanf("%s",s);
    int i,j;
    for(i=0;i<strlen(s);i++)
        s[i]=((s[i]-'A'+3)%26)+'A';
    printf("%s\n",s);
    return 0;
}
