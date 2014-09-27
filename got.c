#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
            printf("Valar Morghulis\n");
        else
            printf("Lannisters always pays their debts\n");
    }
    return 0;
}
