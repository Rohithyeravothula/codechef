#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
main()
{
    char a[100];
    int b[100];
    int c[100];
    scanf("%s",a);
    int i,j,l=strlen(a);
    j=0;
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ')
        {
            b[j]=a[i]-'0';
            j++;
        }
    }
    for(i=0;i<j-1;i++)
        c[i]=math.abs(b[i]-b[i+1]);
    sort(c,c+j-1);
    printf("%d\n",c[0]);
    return 0;
}
