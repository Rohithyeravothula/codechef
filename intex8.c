#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
struct ex
{
int i;
float j;
char *s;
};
struct ex *p;
p=(struct ex* )malloc (sizeof(struct ex));
p->s=(char*)malloc(20);
free(p->s);
free(p);
printf("Executed");return 0;
}
