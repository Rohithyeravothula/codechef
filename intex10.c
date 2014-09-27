#include<stdio.h>
int help(int help)
{
    help = help+2;
    return help;
}
main()
{
    printf("%d\n",help(10));
    return 0;
}

