#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],b[n][n],i,j,k,c[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			{scanf("%d %d",&a[i][j],&b[i][j]);
			c[i][j]=0;}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)	
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
		}
		return 0;

}