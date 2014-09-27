#include<stdio.h>
#include<string.h>
main()
{
    int m,c=0;
    scanf("%d",&m);
    while(m--)
    {
        char s[100005],a[100005];
        scanf("%s",a);
        int l=strlen(a),i,j,k;
        s[0]='C';
        j=0;
        for(i=0;i<l;i++)
        {
            if(s[j]=='C')
            {
                j++;
                s[j]=a[i];
            }
            else if(s[j]==a[i])
            {
                j--;
            }
            else if(s[j]!=a[i])
            {
                j++;
                s[j]=a[i];
            }
        }
        if(j==0)
        c++;
    }
    printf("%d\n",c);
    return 0;
}
