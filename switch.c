#include<stdio.h>
main()
{
    char a;
    scanf("%c",&a);
    switch(a)
    {
    case 'S':
        {
        printf("S\n");
        break;
        }
    case 'T':
        {
            printf("T\n");
            break;
        }
    default:
        {
            printf("default\n");
            break;
        }
    }

}
