#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char a[1000];
        gets(a);
        int i=0;
        int l=strlen(a);
        long long int s=1;
        int u=0;
        int v=0;
        char b[25];
        int p;
        int d=0;
        for(i=0;i<l;i++)
            {
                if((a[i]=='X') || (a[i]=='x'))
                    {v=i;
                    strncpy(b,a+u,v);
                    p=atoi(b);
                    if(p==0)
                    {
                        d=1;
                        break;
                    }
                    s=s*p;
                    u=v+1;}

            }
            strncpy(b,a+u,l-v);
            p=atoi(b);
            s=s*p;
            if(d==1)
                printf("Robot hanged.\n");
            else
            {while(s)
            {
                p=s%10;
                if(p!=0)
                {   printf("%d\n",p);
                    break;}
                s=s/10;
            }}

    }
    return 0;
}
