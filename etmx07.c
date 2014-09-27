#include<stdio.h>
#include<string.h>
main()
{
    char a[10000];
    scanf("%s",a);
    int i=0;
    int l=strlen(a);
    while(a[i])
    {
        if(a[i]==a[l-i-1])
            printf("%c",a[i]);
        else
            break;
        i++;
    }
    printf("\n");
    return 0;
}
