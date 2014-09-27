#include<stdio.h>
main()
{
    char a;
    int t=10;
    while(t--)
    {
        while(1)
        {a=getchar();
        putchar(a);
        a=getchar();
        if(a=='\n')
            break;}
    }
}
