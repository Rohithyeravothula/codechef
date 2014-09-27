#include<stdio.h>
long long read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}

main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int s=0,m,t,n;
        n=read_int();
        while(n--)
        {
            m=read_int();
            t=read_int();
            s=s+m*t;
        }
        printf("%lld\n",s);
    }
    return 0;
}
