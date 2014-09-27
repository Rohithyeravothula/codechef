#include<stdio.h>
#include<string.h>
main()
{
    char a[120];
    gets(a);
    int i,l=strlen(a);
    printf("%c",a[0]);
    for(i=1;i<l;i++)
        if((a[i]==" ")&&(a[i-1]==" "))
        continue;
    else
        printf("%c",a[i]);
    printf("\n");
}
