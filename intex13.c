#include<stdio.h>
int main(void)
{
int i,p, num=1;
while(num<=10)
{
i=2;
p=0;
while(i<=num)
{
if(num%i==0)
p++;
if(p>2)
break;
i++;
}
if(p==1)
printf("%3d, ", num);
num++;
}
return 0;
}
