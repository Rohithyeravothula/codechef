#include <stdio.h>
#include <string.h>
using namespace std;
int a[1000002]={0};
int prefix[1000002];
 bool arr[1000002];
void SieveOfEratosthenes()
{
    int n=1000000;
    for(int i=2;i*i<=n;i++)
    {

        if(!arr[i])
        {
          //  printf("%d ",i);
            for(int j=i*2;j<=n;j+=i)arr[j]=true;
        }
    }
   // printf("\n");
    prefix[0]=0;
    int i=0;
   // for(int i=1;i<=10;i++)printf("%d ",arr[i]);

    for(int j=2;j<=1000000;j++)
    {
        if(arr[j]==0)
        {
            prefix[j]=prefix[j-1]+1;
        }
        else prefix[j]=prefix[j-1];
       // printf("%d ",prefix[j]);

    }
}

int main()
{
    int i,n,t,m;
    SieveOfEratosthenes();
    scanf("%d",&t);
    while(t--)
    {
        int c=0;
        scanf("%d %d",&n,&m);
        c= prefix[m]-prefix[n-1];
        //printf("%d\n",c);
        printf("%d\n",m-n+1-c);
    }
    return 0;
}
