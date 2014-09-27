#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int ch(int n)
{
    int m,i;
    m=1;
    for(i=1;i<n;i++)
    {
        m=m*i;
        //printf("%d\n",m);
        m=m%10;
    }
    return m;
}
main()
{
char a[10];
scanf("%s",a);
while(strcmp(a,"#")!=0)
{
    int p,v=atoi(a);
    v=v+1;
    p=ch(v);
    if(p==0)
        printf("9\n");
    else
    printf("%d\n",p-1);
    scanf("%s",a);
}
return 0;
}
