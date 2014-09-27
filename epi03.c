#include<stdio.h>
main()
{
    char s[120];
    char p;
    scanf("%s %c",s,&p);
    int c=0;
    int i;
    for(i=0;i<strlen(s);i++)
        if(s[i]==p)
        c=c+1;
    printf("%d\n",c);
    return 0;
}
