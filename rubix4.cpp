#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n];
        int i,m;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n-1;i++)
            b[i]=a[i+1]-a[i];
        b[n-1]=0;
        int c=0,x=0;
        for(i=0;i<n;i++)
            {
                if(b[i]==1)
                    c++;
                else
                {
                    if(c>m)
                    {m=c;
                    x=i-m;
                    c=0;
                    }
                }
            }
        m=m+1;
        printf("%d %d\n",m,x);

    }
    return 0;
}
