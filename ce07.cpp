#include <iostream>
using namespace std;
char a[100000000];
int main()
{
    int t;
    cin>>t;
    while(t--)
     {
        cout<<"\n";
        int s=0,b=0;
        cin>>a;
        for(int i=0;a[i]!='\0';i++)
        {
            s+=a[i]-48;
            b=b*10+(a[i]-48);
        }
        s=s<<b;
        cout<<s;

     }
    return 0;
}
