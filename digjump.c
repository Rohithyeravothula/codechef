#include<stdio.h>
#include<string.h>
#include<limits.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int ch(int a[],int n)
{
    int i,j,m;
    int b[n];
    int y[10];
    for(i=0;i<10;i++)
        y[i]=100050;
    b[0]=0;
    y[a[0]]=0;
    for(i=1;i<n;i++)
    {
        if(a[i]==a[0])
            b[i]=1;
        b[i]=100050;
    }
    b[1]=1;
    for(i=1;i<n;i++)
    {
        b[i]=1+min(b[i-1],y[a[i]]);
        if(y[a[i]]==100050)
        {
            for(j=0;j<n;j++)
                if(a[j]==a[i] && j!=i)
                b[j]=1+b[i];
            y[a[i]]=b[i];
        }
        else if(b[i]<(1+y[a[i]]))
        {
            y[a[i]]=b[i];
        }
    }
    /*for(i=0;i<n;i++)
        printf("%d ",b[i]);
    printf("\n");
    printf("y\n");
    for(i=0;i<10;i++)
        printf("%d ",y[i]);
    printf("\n");*/
    int u=3;
    while(u--)
    {
    for(i=1;i<n;i++)
    {
        if(i==(n-1))
            b[i]=1+min(b[i-1],y[a[i]]);
        else
        b[i]=1+min(min(b[i-1],b[i+1]),y[a[i]]);
        if(b[i]<(1+y[a[i]]))
            {
                //printf("for %d - %d to %d\n",a[i],y[a[i]],b[i]);
                y[a[i]]=b[i];
            }
    }
    }

    /*for(i=0;i<n;i++)
        printf("%d ",b[i]);
    printf("\n");
    printf("y\n");
    for(i=0;i<10;i++)
        printf("%d ",y[i]);
    printf("\n");*/
return b[n-1];

}
main()
{
    int a[100050];
    char s[100050];
    int l,i=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
        a[i]=s[i]-'0';
    printf("%d\n",ch(a,l));
    return 0;
}
