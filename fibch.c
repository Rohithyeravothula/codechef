#include<stdio.h>
int a[30]={0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025,121393,196418,317811,832040,514229,};
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        for(i=0;i<30;i++)
            if(a[i]==n)
            {printf("Yes\n");
            break;}
        if(i==30)
            printf("No\n");
    }
    return 0;
}

