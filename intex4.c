#include <stdio.h>
int main()
{
int number = 0, remainder = 0;
scanf("%d",&number);
remainder = number%2;
if(remainder == 0)
printf("%d is an even number.\n", number);
else
printf("%d is an odd number.\n", number);
return 0;
}
