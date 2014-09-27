#include<stdio.h>
#include<string.h>
struct stack
    {
        char r[500];
    }a[500];
char* pop(int* j)
{
    return a[*j].r;
    *j=*j-1;
}
int push(char *s,int j)
{
    strcpy(a[j].r,s);
    return j++;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int j,i;
    char *s,*v1,*v2,*op;
    gets(s);
    int l=strlen(s);
    i=0;
    j=0;
    while(i<l)
    {
        if(s[i]!=')')
        {
            j=push((char *)s[i],j);
        }
        else
        {
            v1=pop(&j);
            op=pop(&j);
            v2=pop(&j);
            printf("%s %s %s\n",v1,op,v2);
        }
        i++;
    }
    }
    return 0;
}
