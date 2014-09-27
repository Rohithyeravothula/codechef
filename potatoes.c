#include<stdio.h>
#include<math.h>
int ch(int n)
{
    int i,p=1+(int)sqrt(n);
    for(i=2;i<p;i++)
        if(n%i==0)
        return 0;
    return 1;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        x=x+y+1;
        int p=1;
        while(!ch(x))
        {x++;
        p++;}
        printf("%d\n",p);
    }
    return 0;
}
