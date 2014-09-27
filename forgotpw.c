#include<stdio.h>
#include<string.h>
char s[1000030];
int  z[1000030];
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,k;
        for(i=0;i<1000030;i++)
            z[i]=0;
        scanf("%d",&n);
        char x[100],y[100];
        for(i=0;i<n;i++)
        scanf(" %c %c\n",&x[i],&y[i]);
        gets(s);
        int l=strlen(s);
        for(i=0;i<n;i++)
        for(j=0;j<l;j++)
        if(x[i]==s[j] && z[j]==0)
        {
            s[j]=y[i];
            z[j]=1;
        }
        int d=-1;   // detect .
        for(i=0;i<l;i++)
        {
            if(s[i]=='.')
                {
                    d=i;
                    break;
                }
        }
        //printf("%d\n",d);
        int p=0;
        if(d!=-1)
        {
            for(i=0;i<d;i++)
                if(s[i]!='0')
                break;
            //printf("%d",i);
            for(j=i;j<d;j++)
                {printf("%c",s[j]);
                p=1;}
            //printf("\n");
            for(i=l-1;i>d;i--)
                if(s[i]!='0')
                break;
            //printf("%d",i);
            if(i!=d)
                printf("%c",s[d]);
            //printf("\n");
            for(j=d+1;j<=i;j++)
            {printf("%c",s[j]);
            p=1;}
            if(p==1)
            printf("\n");

        }
        if(d==-1)
        {
            for(i=0;i<l;i++)
                if(s[i]!='0')
                break;
            //printf("%d\n",i);
            for(j=i;j<l;j++)
                {printf("%c",s[j]);
                p=1;}
            if(p==1)
            printf("\n");
        }
        if(p==0)
            printf("0\n");

        scanf("\n");
    }
    return 0;
}
