#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct list{
    int num1;
    int num2;
    };
bool acompare( list lhs, list rhs){return lhs.num1 < rhs.num1;}
int main()
{
    int i,n;
    scanf("%d",&n);
    list a[n];
    for(i=0;i<n;i++)
    scanf("%d %d",&a[i].num1,&a[i].num2);
    std::sort(a,a+n,acompare);
    for(i=0;i<n;i++)
        printf("%d %d\n",a[i].num1,a[i].num2);
    return 0;
}
