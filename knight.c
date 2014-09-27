#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char a[10];
        gets(a);
        int l=strlen(a);
        if((l!=5) || (a[2]!='-'))
            printf("Error\n");
        else
        {
            int b,c;
            b=abs(a[0]-a[3]);
            c=abs(a[1]-a[4]);
            if(((b==1) && (c==2)) || ((b==2) && (c==1)))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
