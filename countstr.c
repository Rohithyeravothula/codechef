#include<stdio.h>
main()
{
int m,n;
scanf("%d %d",&n,&m);
int a[n][m];
int i,j;
for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);

int q;
scanf("%d",&q);
while(q--)
{
    int p1,p2,p3,p4;
    scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
    long long int z=0;
    for(i=p1-1;i<p3;i++)
        for(j=p2-1;j<p4;j++)
        z=z+a[i][j];
    printf("%lld\n",z);
}
return 0;
}
