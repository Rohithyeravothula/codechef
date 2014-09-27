#include<stdlib.h>
#include<string.h>
#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000];
        char f[1000];
        scanf("%s",s);
        int l=strlen(s);
        int i=0;
        int j=0;
        int u=0;
        int v=2;
        while(v<l)
        {
            int p;
            char a[4];
            strncpy(a,s+u,v);
            printf("%s\n",a);
            p=atoi(a);
            if(p==32)
            {
                f[j]=' ';
                j=j+1;
            }
            else if(p<65)
                v=v+1;
            else if((p>65) && (p<122))
                    {
                    f[j]=(char)p;
                    u=v;
                    v=v+2;
                    j=j+1;
                    }
        }
        f[j]='\0';
        printf("%s\n",f);
        }
    return 0;
}
