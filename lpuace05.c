#include<stdio.h>
#include<string.h>
char* bin(long long int n)
{
    long long int m;
    m=n;
    char a[30];
    int p,j=0;
    while(m)
    {
        p=m%2;
        a[j]=p+'0';
        m=m/2;
        j++;
    }
    a[j]='\0';
    return a;
}
long long int dec(char *a)
{
    long long int s=0;
    long long int p=1;
    int i,l=strlen(a);
    for(i=0;i<l;i++)
    {s=s+p*(a[i]-48);
    p=p*2;}
    return s;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,d,p;
        long long int n;
        scanf("%lld",&n);
        char a[30],b[30];
        strcpy(a,bin(n));
        int l=strlen(a);
        d=0;
        if(l%2==1)
            d=1;
        else
        {
            p=l/2;
            for(i=0;i<p;i++)
                if(a[i]!=a[i+p])
            {
                d=1;
                break;
            }
            if(d==0)
            strncpy(b,a,p);
        }
        if(d==0)
            printf("%lld\n",dec(b));
        else
            printf("Not Lovely\n");
    }
    return 0;
}
