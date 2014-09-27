#include<stdio.h>
void swap(int n,int a[][n],int i,int j)
{
	int c;
	c=a[i][j];
	a[i][j]=a[j][i];
	a[j][i]=c;
}
main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			swap(n,a,i,j);
		}
	for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
			printf("\n");
		}
		return 0;
}
