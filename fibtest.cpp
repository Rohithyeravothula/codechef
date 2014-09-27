#include <iostream>
#include <math.h>
using namespace std;
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool ch(int n)
{
    if(isPerfectSquare(5*n*n + 4) ||isPerfectSquare(5*n*n - 4))
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        if(ch)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
  return 0;
}
