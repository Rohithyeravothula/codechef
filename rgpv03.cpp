#include<iostream>
#include<algorithm>
using namespace std;
inline int fastio()
{
     int t=0;
     char ch;
     ch=getchar_unlocked();
     while(ch<'0'||ch>'9')
     ch=getchar_unlocked();
     while(ch<='9'&& ch>='0')
     {
                     t=(t<<3)+(t<<1)+ch-'0';
                     ch=getchar_unlocked();
     }
     return t;
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,i;
        n=fastio();
        int a[n];
        if(n%2==0)
        {
        for(i=0;i<n;i++)
            a[i]=fastio();
        cout <<"-1\n";
        }
        else
        {
        for(i=0;i<n;i++)
            a[i]=fastio();
        sort(a,a+n);
        cout <<a[n/2];
        cout <<"\n";
        }


    }
}
