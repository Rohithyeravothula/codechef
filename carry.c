#include<stdio.h>
int Add(int x, int y)
{
    int c=0;

    while (y != 0)
    {
        int carry = x & y;
        printf("%d\n", carry);
        c=c+carry;
        x = x ^ y;
        y = carry << 1;
    }
    return c;
}

int main()
{
    printf("%d", Add(99, 99));
    return 0;
}
