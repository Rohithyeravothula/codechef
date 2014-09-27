#include<stdio.h>
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int main()
{
    int m,d,y;
    scanf("%d %d %d",&m,&d,&y);
    char a[10][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    printf ("%s\n",a[dayofweek(d,m,y)-1]);
    return 0;
}
