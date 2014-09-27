#include <stdio.h>
#define W 1000000007
void multiply(long long int F[2][2], long long int M[2][2]);

void power(long long int F[2][2], long long int n);
long long int fib(long long int n)
{
  long long int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
void power(long long int F[2][2], long long  int n)
{
  if( n == 0 || n == 1)
      return;
  long long int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

void multiply(long long int F[2][2],long long  int M[2][2])
{
  long long int x =  ((F[0][0]*M[0][0])%W + (F[0][1]*M[1][0])%W)%W;
  long long int y =  ((F[0][0]*M[0][1])%W + (F[0][1]*M[1][1])%W)%W;
  long long int z =  ((F[1][0]*M[0][0])%W + (F[1][1]*M[1][0])%W)%W;
  long long int w =  ((F[1][0]*M[0][1])%W + (F[1][1]*M[1][1])%W)%W;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
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
  t=fastio();
  while(t--)
  {
      long long int n;
      n=fastio();
      printf("%lld\n",fib(n+1));
  }
      return 0;
}
