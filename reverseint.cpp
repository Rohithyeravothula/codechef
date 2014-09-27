#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;
int rev(int n)
{
    int i;
    char a[10];
    i=0;
    while(n)
    {
        a[i]=(char)(n%10);
        n=n/10;
    }
    a[i]='\0';
    reverse(a,a+i+1);
    return atoi(a);
}

int main()
{
    printf("%d",rev(10));
    return 0;
}
