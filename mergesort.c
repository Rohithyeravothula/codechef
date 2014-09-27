#include<stdio.h>
void merge(int *a,int l,int m,int r);
void mergesort(int *a,int l,int r);
void merge(int *a,int l,int m,int r)
{
    int i,j,k,n1,n2;
    n1=m-l+1;
    n2=r-m;
    int c[n1],d[n2];
    for(i=0;i<n1;i++)
    c[i]=a[l+i];
    for(i=0;i<n2;i++)
    d[i]=a[m+i+1];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(c[i]<=d[j])
        {
            a[k]=c[i];
            i++;
        }
        else
        {
            a[k]=d[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=c[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        a[k]=d[j];
        j++;
        k++;
    }
}
void mergesort(int *a,int l,int r)
{
    if(l<r)
    {
        int m=(l+(r-1))/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }

}
