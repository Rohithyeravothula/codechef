#include<stdio.h>
#include<string.h>
main()
{
    int x,n,i;
    scanf("%d %d",&x,&n);
    for(i=0;i<n;i++)
    {
        char a[55];
        int c[54]={0};
        scanf("%s",a);
        for(j=0;j<55;j++)
            c[(int)a[i]-'A']=1;






    }
}
