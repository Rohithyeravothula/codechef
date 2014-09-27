#include <stdio.h>
#include <stdlib.h>
long long int  _mergeSort(long long int arr[],long long int temp[],long long  int left,long long int right);
long long int merge(long long int arr[],long long int temp[],long long  int left,long long int mid,long long  int right);

long long int mergeSort(long long int arr[],long long int array_size)
{
    long long int *temp = (long long int *)malloc(sizeof(long long int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
long long int _mergeSort(long long int arr[], long long int temp[], long long int left,long long  int right)
{
  long long int mid, inv_count = 0;
  if (right > left)
  {
    mid = (right + left)/2;
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid,long long  int right)
{
  long long int i, j, k;
  long long int inv_count = 0;
  i = left;
  j = mid;
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
    inv_count = inv_count + (mid - i);
    }
  }

  while (i <= mid - 1)
    temp[k++] = arr[i++];

  while (j <= right)
    temp[k++] = arr[j++];

  for (i=left; i <= right; i++)
    arr[i] = temp[i];

  return inv_count;
}
int main()
{
    long long int n,k,i;
    scanf("%lld %lld",&n,&k);
    long long int a[n],b[n];
    for(i=0;i<n;i++)
        {scanf("%lld",&a[i]);
        b[i]=a[i];}
    long long int p=mergeSort(b,n);
    int c[n]={0};
    struct pair
    {
        int x,y;
    }d[k];
    l=0;
    for(i=0;i<n;i++)
    {
        int x,y
        scanf("%d %d",&x,&y);
        for(j=0;j<l;j++)
        {
            if
        }
        d[l].x=x;
        d[l].y=y;
        l++;

    }




}
