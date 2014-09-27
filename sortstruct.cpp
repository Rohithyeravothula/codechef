#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
bool sortbynum( const list & lhs, const list & rhs)
{
    return lih.num1<rhs.num1;
}
int main()
{
    int n;
    scanf("%d",&n);
    struct list
    {
        int num1;
        int num2;
    }a[n];
    int i;
    for(i=0;i<n;i++)
    scanf("%d %d",&a[i].num1,&a[i].num2);
    std::sort(0,n,sortbynum);
    for(i=0;i<n;i++)
    printf("%d %d\n",a[i].num1,a[i].num2);
    return 0;

}
