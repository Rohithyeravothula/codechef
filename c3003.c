#include<stdio.h>
#include<string.h>
main()
{
    char s1[1020],s2[1020];
    scanf("%s %s",s1,s2);
    int a[150]={0};
    int i;
    for(i=0;i<strlen(s1);i++)
        a[(int)s1[i]-'A']++;
    for(i=0;i<strlen(s2);i++)
        a[(int)s2[i]-'A']=0;
    for(i=0;i<150;i++)
        if(a[i]!=0)
        printf("%c%d",i+'A',a[i]);
    printf("\n");
    return 0;
}
