#include<stdio.h>
int y=1000000;
int a1[1000000]={0};
int a2[1000000]={0};
int a3[1000000]={0};
main()
{

    int n1,n2,n3,n,p,s;
    scanf("%d %d %d",&n1,&n2,&n3);
    int i;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&p);
        a1[p]=a1[p]+1;

    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&p);
        a2[p]=a2[p]+1;

    }
    for(i=0;i<n3;i++)
    {
        scanf("%d",&p);
        a3[p]=a3[p]+1;

    }
    s=0;
    for(i=0;i<y;i++)
        if((a1[i]+a2[i]+a3[i])>=2)
        s=s+1;
    printf("%d\n",s);
    for(i=0;i<y;i++)
        if((a1[i]+a2[i]+a3[i])>=2)
        printf("%d\n",i);
return 0;
}
