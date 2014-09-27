#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	int i,k,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			{scanf("%d",&a[i][j]);
			a[i][j]=0;}
	printf("yes\n");
	for(i=0;i<n;j++)
		for(j=0;j<n;j++)
		{
			printf("%d %d\n",i,j);
			if(a[i][j]==0 && b[i][j]==0)
			{
				b[i][j]=1;
				for(k=0;k<n;k++)
					{a[i][k]=0;
					 a[k][j]=0;
					 b[i][k]=1;
					 b[k][j]=1;}

			}
		}

	for(i=0;i<n;i++)
		{for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
		}
	return 0;

}