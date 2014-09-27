#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char a[1000];
        scanf("%s",a);
        long long int s;
        int l=strlen(a);
        int i;
        i=0;
        s=1;
        for(i=)
        {
            if(a[i]=='0')
            {s=-1;
            break;}
            s=s*(a[i]-'0');
            i=i+2;
            if(a[i]=='\n')
                break;
        }
        while(s%10==0)
            s=s/10;
        printf("%d\n",s%10);
    }
    return 0;
}
