#include<stdio.h>
#include<string.h>
main()
{
    char a[10],b[10];
    scanf("%s %s",a,b);
    int i,j,l=strlen(a),p=strlen(b),d=0;
    for(i=0;i<l;i++)
        for(j=0;j<p;j++)
        if(a[i]==b[j])
    {
        printf("TRUE\n");
        d=1;
        goto aa;
    }
    aa:
    if(d==0)
        printf("FALSE\n");
    return 0;

}
