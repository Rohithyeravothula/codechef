
#include<stdio.h>
long int a[1200]={0};
int ch(int);
main()
{


    int i,j,v=0;
    long int s;
    for(i=1;i<1001;i++)
        for(j=2;j<20;j++)
    {
     s=pow(i,j);
     if(s>1000000)
        break;
     a[v]=s;
     v=v+1;
    }
    int t,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
     scanf("%d",&x);
     int d=0;
     for(j=0;j<1200;j++)
     {
         if (ch(x-a[j])==1)
         {
             printf("Yes\n");
             d=1;
             break;
         }

     }
     if (d==0)
            printf("No\n");
    }
}
int ch(int n)
{
    int i;
    for(i=0;i<1200;i++)
        if (a[i]==n)
        return 1;
    return 0;
}
