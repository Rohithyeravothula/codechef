#include<stdio.h>
#include<string.h>
main()
{
    unsigned int t,l,c,i;
    scanf("%d\n",&t);
    char a[100001];
    while(t--)
    {
        gets(a);
        l=strlen(a);
        c=0;
        for(i=0;i<l;i++)
            {
                if(a[i]=='T')
            c++;
            else
                c--;
            if(c<0)
            break;
            }
        if(c==0)
            puts("YES");
        else
            puts("NO");

    }
    return 0;
}
