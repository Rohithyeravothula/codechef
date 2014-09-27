#include <stdio.h>
#include <string.h>
void markMultiples(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}
void SieveOfEratosthenes(int n)
{
    long long int s=0;
    if (n >= 2)
    {
        bool arr[n];
        memset(arr, 0, sizeof(arr));
        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                s=s+i+1;
                markMultiples(arr, i+1, n);
            }
        }
    }
    printf("%lld\n",s);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        SieveOfEratosthenes(n);
    }
    return 0;
}
