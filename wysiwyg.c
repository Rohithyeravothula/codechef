#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s1[1000],s2[1000],r1[1000],r2[1000];
        scanf("%s %s",s1,s2);
        int l1=strlen(s1),l2=strlen(s2);
        int i,j,p;
        p=max(l1,l2);
        j=0;
        if(p==l1)

        for(i=0;i<p;i++)
        {
            if(s1[j]==s2[j])
        }

    }

}
