#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int n;
    char s[30];
    scanf("%d %s",&n,s);
    int i;
    for(i=0;i<n;i++)
    {char a[110];
    scanf("%s",a);
    int j;
    int l=strlen(a);
    for(j=0;j<l;j++)
    {

        if(isalpha(a[j]))
        {
            if(!isupper(a[j]))
            printf("%c",s[a[j]-'a']);
            else
                {
                    char e=tolower(a[j]);
                    char u=s[e-'a'];
                    printf("%c",toupper(u));}}
            else
            {
                    if(a[j]=='_')
                        printf(" ");
                    else if(a[j]==" ")
                    continue;
                    else
                        printf("%c",a[j]);
            }

    }
    printf("\n");
    }
    return 0;

}
