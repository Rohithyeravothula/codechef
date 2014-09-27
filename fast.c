#include<stdio.h>
void scan_f(int);
main()
{
char a;
scan_f(&a);
printf("%c",a);
}
//inline
void scan_f(int a)
{
char c = 0;
while(c<33)
//c = fgetc_unlocked(stdin);
c = getc(stdin);
a = 0;
while(c>33)
{
a = a*10 + c - '0';
//c = fgetc_unlocked(stdin);
c = getc(stdin);
}
}
