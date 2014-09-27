#include<stdio.h>
main()
{
    int t,l,i,k,p,v;
    scanf("%d",&t);
    while(t--)
    {
        char s[1010];
        scanf("%s",s);
        l=strlen(s);
        k=0;
        for(i=0;i<l-1;i++)
        {
            p=s[i+1]-s[i];
            if(p<0)
                p=p+26;
            k=k+p;
        }
        k=k+1+l;
        v=l*11;
        if(k<=v)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
