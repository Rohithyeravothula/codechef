#include<stdio.h>
main()
{
    struct list
    {
        char a;
        double b;
        int c;
    }al;
    struct list *e;
    printf("%d %d\n",sizeof(al),sizeof(*e));
    return 0;
}
