#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        t=t-1;
        char a[100000];
        scanf(" %s",a);
        int i,d=0;
        for(i=2;i<strlen(a);i++)
        {
            if (((a[i]=='0') && (a[i-1]=='1') && (a[i-2]=='0') ) || (((a[i]=='1') && (a[i-1]=='0') && (a[i-2]=='1'))))
            {

                printf("Good\n");
                d=1;
                break;
            }
        }
        if(d==0)
            printf("Bad\n");
    }
return 0;
}
