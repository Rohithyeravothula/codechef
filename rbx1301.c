#include<stdio.h>
int main()
{
    int n,m,a;
    while(scanf("%d",&n)>0)
    {m=n;
    while(m)
    {
        a=m%10;
        if(a!=0 && n%a!=0)
        {
            printf("Invalid\n");
            break;
        }
        m=m/10;
    }
    if(m==0)
        printf("Valid\n");
    }
    return 0;
}
