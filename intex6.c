#include<stdio.h>
#include<string.h>
#include<malloc.h>
const char * make_a_copy(const char *st)
{
char *copy_st;
copy_st=malloc(strlen(st));
strcpy(copy_st,st);
return copy_st;
}
int main()
{
const char *str1="A";
const char *str2=make_a_copy(str1);
printf("%s\n","A");
return 0;
}
