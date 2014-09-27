#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j,k;
        scanf("%d %d",&n,&m);
        int a[n],e[n];
        struct pair
        {
            int x,y;
        }b[m];
        for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        e[i]=0;}
        for(i=0;i<m;i++)
        scanf("%d %d",&b[i].x,&b[i].y);
        for(i=0;i<m;i++)
            if(b[i].x!=b[i].y)
            for(j=b[i].x-1;j<b[i].y;j++)
            e[j]=1;
        int d=0;
        for(i=0;i<n;i++)
        if(e[i]==0 && a[i]!=i+1)
        {
            d=1;
            break;
        }
        if(d==0)
        {
            int c[n];
            k=0;
            for(i=0;i<n;i++)
            {

                if(e[i]==1)
                {
                    c[k]=a[i];
                    k++;
                }
                else
                {
                    sort(c,c+k);
                    for(j=0;j<k;j++)
                    if(c[j]!=i-k+1+j)
                    {
                        d=1;
                        break;
                    }
                    k=0;
                }
                if(i==n-1 && k!=0)
                {
                    sort(c,c+k);
                    for(j=0;j<k;j++)
                    if(c[j]!=i-k+2+j)
                    {
                        d=1;
                        break;
                    }
                }
            if(d==1)
            break;
            }
        }
        if(d==0)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}
