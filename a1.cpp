#include<stdio.h>
#include<stdlib.h>
bool isSubsetSum(int set[], int n, int sum)
{

    bool subset[sum+1][n+1];
    for (int i = 0; i <= n; i++)
      subset[0][i] = true;
    for (int i = 1; i <= sum; i++)
      subset[i][0] = false;
     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] || subset[i - set[j-1]][j-1];
       }
     }
     return subset[sum][n];
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i;
        scanf("%d %d",&n,&m);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(isSubsetSum(a,n,m)==true)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
