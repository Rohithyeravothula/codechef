#include<stdio.h>
#include<math.h>
int ch(int n)
{
    if(n==0 || n==1)
    return 0;
    int i,m=(int)sqrt(n)+1;
    for(i=2;i<m;i++)
    if(n%i==0)
    return 0;
    return 1;

}
main()
{
    int a[5200],i,t,n,j=0;
    for(i=0;i<50000;i++)
    if(ch(i)==1)
    {
        a[j]=i;
        j++;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
