#include<stdio.h>
main()
{
    char a[11];
    scanf("%s",a);
    int i,s=0;
    for(i=0;i<5;i++)
        s=s+(a[i]-48)*(a[i+5]-48);
    printf("%d",s);
    return 0;
}
