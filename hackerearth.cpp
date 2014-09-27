#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n,i,j;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        j=1;
        int d=0;
        for(i=0;i<n;i++)
        {
            if((a[i]-j+1)<=0)
            {
                d=1;
                break;
            }
            j++;
            if(j%7==0)
            j++;
        }
        if(d==0)
        printf("Rick now go and save Carl and Judas\n");
        else
        printf("Goodbye Rick\n%d\n",i);
    }
    return 0;
}
