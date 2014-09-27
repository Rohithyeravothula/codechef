#include<stdio.h>
#include<math.h>
int ch(int n)
{
    int m=sqrt(n);
    if(m*m==n)
        return 1;
    return 0;

}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,d;
        scanf("%d",&n);
        if(ch(n)==0)
            printf("-1\n");
        else
        {
            //printf("Yes\n");
            m=sqrt(n);
            d=0;
            for(i=2;i<m;i++)
            {
                if(n%i==0)
                d=d+1;
                if(d>1)
                    break;
            }
            if(d==2)
                printf("1\n");
            else
                printf("-1\n");
        }
    }
    return 0;
}
