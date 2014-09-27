#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[200];
        scanf("%s",a);
        int i,cr=0,cu=0,cb=0,cy=0;
        int l=strlen(a);
        for(i=0;i<l;i++)
            {if(a[i]=='r')
            cr++;
            if(a[i]=='u')
            cu++;
            if(a[i]=='b')
            cb++;
            if(a[i]=='y')
            cy++;
            }
            int p=(min(min(cr,cb),min(cu,cy)));
            printf("%d\n",p);
    }
    return 0;
}
