#include <stdio.h>
inline int fastio()
{
     int t=0;
     char ch;
     ch=getchar_unlocked();
     while(ch<'0'||ch>'9')
     ch=getchar_unlocked();
     while(ch<='9'&& ch>='0')
     {
                     t=(t<<3)+(t<<1)+ch-'0';
                     ch=getchar_unlocked();
     }
     return t;
}

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

int main()
{
    int t;
    t=fastio();
    while(t--)
    {
        int n,k,i;
        n=fastio();
        k=fastio();
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
          if (isSubsetSum(a, n, k) == true)
            printf("1\n");
        else
            printf("0\n");
    }

  return 0;
}
