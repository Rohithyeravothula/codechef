#include<stdio.h>
#include<string.h>
char a[100];
char b[100];
int sameseq()
{
int i,j,l1=strlen(a),l2=strlen(b);
j=0;
i=0;
while((a[i]!='\0') && (b[i]!='\0'))
    {
    if(a[i]==b[j])
    {
    i=i+1;
    j=j+1;
    }
    else
       j=j+1;
    if(i==l1)
        return 1;
    if(j==l2)
    return 0;


    }
}
int oppseq()
{
int i,j,l1=strlen(a),l2=strlen(b);
j=l2-1;
i=0;
while((a[i]!='\0') && (b[l2-i]!='\0'))
    {
    if(a[i]==b[j])
    {
    i=i+1;
    j=j-1;
    }
    else
       j=j-1;
    if(i==l1)
        return 1;
    if(j<0)
    return 0;


    }
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",a,b);
        printf("%d\n",oppseq());
    }
    return 0;
}
