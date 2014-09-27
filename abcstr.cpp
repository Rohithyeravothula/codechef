#include<stdio.h>

using namespace std;
typedef long long ll;
char s[1000005];
ll arr[3][1000005]={0};
int main()
{
    ll i,j,k,l,ctr=0;
    scanf("%s",s);
    arr[s[0]-'A'][0]++;
    for(i=1;s[i]!='\0';i++)
    {
        arr[0][i]=arr[0][i-1];
        arr[1][i]=arr[1][i-1];
        arr[2][i]=arr[2][i-1];
        arr[s[i]-'A'][i]++;

        j=0;
        while(i-j+1>=3)
        {
            ll a=arr[0][i]-(j?arr[0][j-1]:0),b=arr[1][i]-(j?arr[1][j-1]:0),c=arr[2][i]-(j?arr[2][j-1]:0);
         if(a==b&&b==c)
         {
             ctr++;
             j+=3;

         }
         else j++;
        }
    }
    printf("%lld\n",ctr);
}
