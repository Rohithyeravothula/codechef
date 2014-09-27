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
int a[1000000];
void SieveOfEratosthenes(int n)
{
    int j=0;

    if (n >= 2)
    {
        bool arr[n];
        memset(arr, 0, sizeof(arr));
        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                a[j]=i+1;
                j++;
                //printf("%d ", i+1);
                markMultiples(arr, i+1, n);
            }
        }
    }
}

int main()
{
    int n = 30;
    SieveOfEratosthenes(n);
    return 0;
}
