#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10005];
        scanf("%s",s);
        int l=strlen(s),i,ac,bc,c,mc;
        scanf("%d %d",&ac,&bc);
        mc=ac;
        if(ac>bc)
        mc=bc;
        c=0;
        for(i=0;i<(l/2);i++)
        {
            if(s[i]!=s[l-i-1])
            {
                if(s[i]=='/' || s[l-i-1]=='/')
                {if(s[i]=='a')
                c=c+ac;
                if(s[i]=='b')
                c=c+bc;
                if(s[l-i-1]=='a')
                c=c+ac;
                if(s[l-i-1]=='b')
                c=c+bc;}
                else
                break;
            }
            else
            {
                if(s[i]=='/')
                c=c+mc;
            }
        }
        if(i==l)
        printf("%d\n",c);
        else
        printf("notpossible\n");

    }
    return 0;
}
