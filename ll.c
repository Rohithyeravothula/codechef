#include<stdio.h>

main()
{
    struct stu{
    int num;
    char name[10];
    struct stu *next;
    };
    typedef stu *node
    head = (node*)malloc(sizeof(node));

}
