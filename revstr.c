#include<stdio.h>
#include<string.h>
main()
{
    char a[1000],b[1000];
    gets(a);
    int i,l=strlen(a),u,v,j;
    u=0;
    v=0;
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            v=i;
            if(a[v-1]=='.')
            {
                for(j=u;j<v-1;j++)
                    b[j]=a[j];
                b[v]='.';
            }
            else
            {
                for(j=u;j<v;j++)
                    b[j]=a[j];
            }
        }
    }
    for(i=u;i<l;i++)
        b[i]=a[i];
    b[l]='\0';
    printf("%s\n",b);
    return 0;
}
