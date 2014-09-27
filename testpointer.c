#include<stdio.h>
main()
{
    int *a,*b;
    int c,d;
    a=&c;
    b=&d;
    if(a==b)
        printf("same\n");
    else
        printf("NO>>>\n");
    return 0;
}
