#include <stdio.h>
#include <stdlib.h>
long long int  _mergeSort(long long int arr[], long long int temp[], long long int left, long long int right);
long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long int right);
long long int mergeSort(long long int arr[], long long int array_size)
{
    long long int *temp = (long long int *)malloc(sizeof(long long int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
long long int _mergeSort(long long int arr[], long long int temp[], long long int left, long long int right)
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
long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long  int right)
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
main()
{
   long long int n;
  scanf("%lld",&n);
  long long int m[n];
  long long int f[n];
   long long int i;
  for(i=0;i<n;i++)
      scanf("%lld %lld",&m[i],&f[i]);
    printf("%lld\n",mergeSort(m,n)+mergeSort(f,n));
    return 0;
}
