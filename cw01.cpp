#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=0;
    int a[10000]={0};
    while(scanf("%d",&a[n])!=EOF)
        n++;
    sort(a,a+n);
    int m=a[n-3];
    if(m)
    printf("%d\n",m);
    return 0;
}
