#include <stdio.h>
#include <string.h>
main( )
{
	int size;
	scanf ("%d",&size);
	int arr[size],i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d",arr[i]);
	}
	return 0;
}
