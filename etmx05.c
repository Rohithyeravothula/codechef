#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    scanf("%s",a);
    int l=strlen(a);
    if(l>=3)
    {l=l/2;
    printf("%c%c%c\n",a[l-1],a[l],a[l+1]);}
    else
    printf("0\n");


    return 0;
}
