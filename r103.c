#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main ()
{
   double x, ret, val;
   scanf("%lf",&x);
   x=PI*(x/180);
   printf("%lf\n", cos(x));
   return 0;
}
