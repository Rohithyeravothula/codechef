#include<stdio.h>
#include<string.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[120][30]={0};
    int f[30]={0};
    int i,j,k;
    char s[120];
    int m;
    for(j=0;j<n;j++)
    {
        scanf("%s",s);
        for(i=0;i<strlen(s);i++)
        {
            k=(int)s[i]-97;
            a[j][k]=a[i][k]+1;
        }
    }
    for(j=0;j<30;j++)
    {

        m=200;
        for(i=0;i<n;i++)
            if(a[i][j]<m)
                m=a[i][j];

        if(m!=0)
        f[j]=m;
    }
    int d=0;
    for(i=0;i<30;i++)
    if(f[i]!=0)
            {printf("%c",i+97);
            d=1;
            }
    if(d==0)
        printf("no such string");
    printf("\n");
    return 0;
}
