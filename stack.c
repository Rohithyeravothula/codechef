#include<stdio.h>
 struct stack
    {
      int a[100];
      int max;
    };
typedef struct stack l;
void push(int);
void pop();
main()
{

    int t,i,j,n;
    l.max=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n>10)
            push(n);
    }
    for(i=0;i<l.max;i++)
        printf("%d",l.a[i]);

}
void push(n)
{
    if(l.max<99)
        {a[l.max+1]=n;
        l.max=l.max+1;
        }
}
void pop()
{
    if(l.max!=0)
        l.max=l.max-1;
}
