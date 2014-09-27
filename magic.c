#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    int x=1;
    while(t--)
    {
        int r1,r2,g,i,j;
        int a[16],b[16];
        scanf("%d",&r1);
        for(i=0;i<16;i++)
            scanf("%d",&a[i]);
        scanf("%d",&r2);
        for(i=0;i<16;i++)
            scanf("%d",&b[i]);
        r1--;
        r2--;
        int c=0,num;
        for(i=4*r1;i<4*r1+4;i++)
            for(j=4*r2;j<4*r2+4;j++)
            if(a[i]==b[j])
            {c++;
            num=a[i];}
        if(c==1)
            printf("Case #%d: %d\n",x,num);
        else if(c>1)
            printf("Case #%d: Bad magician!\n",x);
        else if(c==0)
            printf("Case #%d: Volunteer cheated!\n",x);
        x++;
    }
    return 0;
}
