#include<stdio.h>
#include<string.h>
main()
{
    int t,n,i,j;
    char a[101][21]; /*names*/
    char v[101];
    char b[21],c;
    scanf("%d",&t);
    int l=0;
    while(t)
    {
        t=t-1;
        scanf("%d",&n);
        int s=0;
        for(i=0;i<n;i++)
        {
            scanf(" %s %c",b,&c);
            int g=0;
            for(j=0;j<101;j++)
                if(strcmp(a[j],b)==0)
                {
                 if((v[j]=='+') && (c=='-'))
                    s=s-2;
                 if((v[j]=='-') && (c=='+'))
                    s=s+2;
                g=1;
                }
            if(g==0)
            {
                strcpy(a[l],b);
                v[l]=c;
                if(c=='+')
                    s=s+1;
                if(c=='-')
                    s=s-1;
                l=l+1;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
