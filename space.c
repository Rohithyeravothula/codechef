#include<stdio.h>
main()
{
    char a[1000];
    gets(a);
    int i,l=strlen(a);
    for(i=1;i<l;i++)
        if((a[i]==' ') && (a[i-1]==' '))
        continue;
    else
        printf("%c",a[i-1]);
    printf("%c",a[l-1]);
    return 0;
}
