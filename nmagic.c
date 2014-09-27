#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[120];
        scanf("%s",s);
        int i,l=strlen(s);
        int d=0;
        int p;
        p=s[0]-'0';
        if(p>7)
            {printf("4");
            d=1;}
        else if(p<7 && p>4)
            s[0]=7+'0';
        else
            s[0]=4+'0';
        if(d==0)
        {
        for(i=l-1;i>=0;i++)
        {
            p=s[i]-'0';
            if(p<4)
                s[i]=
        }

        }
        printf("%s\n",s);
    }
    return 0;
}
