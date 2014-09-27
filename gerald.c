#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,m,k;
        scanf("%d %d %d",&n,&m,&k);
        for(i=0;i<n;i++)
            {
                if(i%4==3)
                for(j=0;j<m;j++)
                {
                if(j%4==0)
                    printf("A");
                else if(j%4==1)
                    printf("G");
                else if(j%4==2)
                    printf("C");
                else
                    printf("T");
                }
                if(i%4==1)
                for(j=0;j<m;j++)
                {
                if(j%4==0)
                    printf("C");
                else if(j%4==1)
                    printf("A");
                else if(j%4==2)
                    printf("T");
                else
                    printf("G");
                }
                if(i%4==0)
                for(j=0;j<m;j++)
                {
                if(j%4==0)
                    printf("T");
                else if(j%4==1)
                    printf("C");
                else if(j%4==2)
                    printf("G");
                else
                    printf("A");
                }
                if(i%4==2)
                for(j=0;j<m;j++)
                {
                if(j%4==0)
                    printf("G");
                else if(j%4==1)
                    printf("A");
                else if(j%4==2)
                    printf("C");
                else
                    printf("T");
                }
        printf("\n");
            }
    }
    return 0;
}
