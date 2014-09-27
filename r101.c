#include<stdio.h>
main()
{
    char a[1000];
    char b;
    gets(a);
    b=getchar();
    int s=0;
    int i;
    for(i=0;i<strlen(a);i++)
        if(a[i]==b)
        s=s+1;
    printf("%d\n",s);
    return 0;
}
