#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[1000050];
        scanf("%s",a);
        int c=0,i,j,x=0,y=0,l=strlen(a),d=0;
        for(i=0;i<l;i++)
            {if(a[i]=='<')
                x++;
            else
                break;
            }
        for(j=i;j<l;j++)
        {
            if(a[j]=='>')
                y++;
            else
                break;
        }
        if(x<y)
            printf("%d\n",2*x);
        else
            printf("%d\n",2*y);
    }
    return 0;
}
