#include<iostream>
#include<algorithm>
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

using namespace std;
int main()
{
    int t;
    t=fastio();
    while(t--)
    {
        long long int n,i,k,s=0;
        n=fastio();
        k=fastio();
        long long int a[n];
        for(i=0;i<n;i++)
            a[i]=fastio();
        sort(a,a+n);
        for(i=0;i<k;i++)
            s=s+a[n-i-1];
        cout<<s;
        cout<<"\n";
    }
    return 0;

}
