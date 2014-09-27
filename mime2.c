#include<stdio.h>
#include<string.h>
main()
{
int n,q,n1,q1;
scanf("%d %d",&n,&q);
char a[105][12];
char b[105][55];
int i=0;
n1=n;
q1=q;
while(n1--)
{
    scanf("%s %s",a[i],b[i]);
    i=i+1;
}
char z[105];
int j=-1;
while(q1--)
{
    scanf("%s",z);
    for(i=0;i<strlen(z);i++)
        if(z[i]=='.')
            j=i+1;
    int d=0;
    if(j!=-1)
    {for(i=0;i<n;i++)
        if(strcmp(z+j,a[i])==0)
    {
        printf("%s\n",b[i]);
        d=1;
        break;
    }
    }
    if((d==0) || (j==-1))
        printf("unknown\n");

}
return 0;
}
