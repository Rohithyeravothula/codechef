#include<stdio.h>
#include<ctype.h>
#include<string.h>
int check(int );
main()
{
    int t;
    scanf("%d\n",&t);
    int count=0;
    while(t--)
    {
        char a[120];
        gets(a);
        int i;
        int u=0;
        int l=strlen(a);
        for(i=l;i>=0;i--)
            if(isblank(a[i]))
            {u=i;
            break;}
        char num[100]={0};
        for(i=0;i<l-u;i++)
            num[i]=a[u+1+i];
        num[i]='\0';
        int k=atoi(num);
        if (check(k)==1)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
int check(int n)
{
    int m=n;
    int c8,c5,c3,p;
    c8=0;
    c5=0;
    c3=0;
    while(m)
    {
        p=m%10;
        if(p==8)
            c8++;
        else if(p==5)
            c5++;
        else if(p==3)
            c3++;
        else
            break;
        m=m/10;
    }
    if((m!=0) || (c8<c5) || (c5<c3))
        return 0;
    else if ((m==0) && (c8>=c5) && (c5>=c3))
        return 1;

}
