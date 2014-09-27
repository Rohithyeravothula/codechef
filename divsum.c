#include<stdio.h>
int num[100000001]={0};
void seive()
{
    num[0]=num[1]=1;
    int i,j;
    for(i=3;i*i<=100000000;i=i+2)
    {
        if(num[i]==0)
        {
            for(j=2*i;j*j<=100000000;j+=i)
                num[j]=1;
        }
    }
}
