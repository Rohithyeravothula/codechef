#include<stdio.h>
int ch(int *a,int d,int n)
{
    int i,j,c0,c1;
    c0=0;
    c1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        c0++;
        else
        c1++;
    }
    //printf("%d %d\n",c0,c1);
    d=1;
    if(c0>=c1)
    d=0;
    i=0;
    j=n-1;
    if(d==0)  // more 0 less 1
    {
    while(i<n && j>=0)
    {
        if(c0==c1)
        break;
        if(a[i]==0 && a[j]==0)
        {i++;
        c0--;}
        else if(a[i]==1 && a[j]==1)
        {
            i++;
            c1--;
        }
        else
        {
            if(a[i]==1)
            {
                j--;
                c0--;
            }
            else
            {
                i++;
                c0--;
            }
        }
    }
    }
    else   // more 1 less 0
    {

        while(i<n && j>=0)
        {
            if(c0==c1)
            break;
        if(a[i]==1 && a[j]==1)
        {
            i++;
            c1--;
        }
        if(a[i]==0 && a[j]==0)
        {
            i++;
            c0--;

        }
        else
        {
            if(a[i]==1)
            {
                j--;
                c1--;
            }
            else
            {
                i++;
                c1--;
            }
        }
        }
    }
    //printf("%d %d\n",i,j);
    return 1+j-i;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,i,j,c0,c1,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    if(a[i]==0)
    c0++;
    else
    c1++;
    }
    i=0;
    j=n-1;
    d=1;
    if(c0>=c1)
    d=0;
    int y=ch(a,d,n);
    if(y<=0)
    printf("Not possible\n");
    else
    printf("%d\n",y);
    }
}
