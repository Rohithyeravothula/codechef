#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int p[1000010];
int bin(int *a,int n,int l,int r)
{
int m;
while(l<r)
{
    m=(l+(r-1))/2;
    if(a[m]==n)
        return m;
    if(n>a[m])
        l = m+1;
    else
        r=m-1;
}
if(l==r && n==a[l])
return l;
return -1;
}
int main()
{
int n,k,i,z;
scanf("%d %d",&n,&k);
int a[n],b[n];
for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    if(k>a[i])
        b[i]=k-a[i];
    else
        b[i]=-1;}
for(i=0;i<1000010;i++)
    p[i]=-1;
for(i=0;i<n;i++)
    p[a[i]]=i;
int c=600000;
int d=0;
for(i=0;i<n;i++)
    if(b[i]!=-1 && p[b[i]]!=-1)
    {
        if(b[i]!=k-b[i])
        {d=1;
        z=min(min(max(i,p[b[i]]),max(i,n-p[b[i]])),min(max(n-i,p[b[i]]),max(n-i,n-p[b[i]])));
        if(c>=z)
            c=z;}
    }
if(d==1)
printf("%d\n",c);
else
    printf("-1\n");
return 0;
}
