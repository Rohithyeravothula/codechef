#include<stdio.h>
main()
{
    int a[10]={2, 3, 5, 13, 89, 233, 1597, 28657, 514229, 433494437};
    int n;
    scanf("%d",&n);
    printf("%d\n",a[n-1]);
    return 0;
}
