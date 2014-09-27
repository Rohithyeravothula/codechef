#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100];
        scanf("%s",a);
        int i,l=strlen(a);
        for(i=0;i<l;i++)
            if(a[i]!=49 || a[i]!=57 || a[i]!=54 || a[i]!=56 || a[i]!=48)
            {printf("NO\n");
            break;}
        if(i==l)
        {printf("YES\n");
        for(i=0;i<l;i++)
        {
            if(a[i]==48 || a[i]==49 || a[i]==56)
                printf("a[i]");
            else if (a[i]=='9')
                printf("6");
            else
                printf("9");
        }
        printf("\n");
    }
    return 0;
    }
}
