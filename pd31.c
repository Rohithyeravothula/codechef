#include<stdio.h>
main()
{
    int a[10020]={0};
    int n,m;
    scanf("%d%d",&n,&m);
    while(m)
    {
        int t1,t2;
        scanf("%d %d",&t1,&t2);
        a[t1]++;
        a[t2]++;
        m=m-1;
    }
    int i;
    for(i=0;i<10010;i++)
        if(a[i]==n-1)
        {printf("YES\n");
        break;}

    if(i==10010)
    printf("NO\n");
    return 0;
}
