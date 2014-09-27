#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,d,e,f;
        int i,j;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        long long int p1[100],p2[100],c1[100]={0},c2[100]={0};
        int u=0,v=0;
        if(a%2==0)
        {
            p1[u]=2;
            c1[u]=1;
            u++;
        }
        if(c%2==0)
        {
            p2[v]=2;
            c2[v]=0;
            v++;
        }
        while(a%2==0)
        {a=a/2;
        c1[0]++;}
        while(c%2==0)
        {c=c/2;
        c2[0]++;}
        e=(int)sqrt(a)+1;
        for(i=3;i<e;i=i+2)
        {
            if(a%i==0)
            {
                p1[u]=i;
                while(a%i==0)
                {a=a%i;
                c1[u]++;}
                u++;
            }
        }
        if(a>2)
        {
            p1[u]=a;
            c1[u]++;
            u++;
        }
        f=(int)sqrt(c)+1;
        for(i=3;i<f;i=i+2)
        {
            if(c%i==0)
            {
                p2[v]=i;
                while(c%i==0)
                {c=c/i;
                c2[v]++;}
                v++;
            }
        }
        if(c>2)
        {
            p2[v]=c;
            c2[v]++;
            v++;
        }
        if(u!=v)
        {
            printf("Not divisible\n");
        }
        else
        {
        /*sort(p1,p1+u);
        sort(p2,p2+u);*/
        for(i=0;i<u;i++)
        {p1[i]=p1[i]*b;
        p2[i]=p2[i]*d;}
        for(i=0;i<u;i++)
            if(p1[i]<p2[i])
            break;
        if(i==u)
        printf("Divisible");
        else
        printf("Not divisible\n");
        }


    }
    return 0;
}



