#include<stdio.h>
int kch(int *a,int n)
{
    int l,r,m;
    l=0;
    r=n;
    m=(l+r-1)/2;
    if(a[l]<a[r])
    {
    while(l!=r)
    {
        printf("%d\n",m);
        if(a[m]<a[m+1] && a[m]<a[m-1])
        {
          //  printf("break\n");
            return m;
        }
        else if(a[l]>a[m-1])
        {
            //printf("left\n");
            l=m+1;
        }
        else if(a[r]<a[m+1])
        {
            //printf("right\n");
            r=m-1;
        }
        m=(l+r-1)/2;
    }
    return -1;
    }
    else
    return 0;


}
main()
{
    int n,i,j,k,l,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d\n",kch(a,n));
    return 0;

}

