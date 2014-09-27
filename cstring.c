#include<stdio.h>
int main()
{

    int t,i,j,v,f;
    int a[26];
    char c[101];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        f=0;
        for(j=0;j<26;j++)
            a[j]=0;
        scanf("%s",c);
        for(j=0;j<strlen(c);j++)
        {
            v=(int)c[j]-97;
            a[v]=1;
        }
        for(j=0;j<26;j++)
            if (a[j]!=1)
                {
                    f=1;
                    break;
                }
        if (f==1)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
