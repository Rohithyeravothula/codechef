#include<stdio.h>
#include<string.h>
int ch(char);
main()
{
    char a[120];
    gets(a);
    int i,j;
    int l=strlen(a);
    char s[120];
    i=0;
    j=0;
    while(i<l)
    {
        if(ch(a[i])==1)
            {s[j]=a[i];
            i=i+3;
            j=j+1;}
        else
        {
            s[j]=a[i];
            i=i+1;
            j=j+1;
        }

    }
    s[j]='\0';
    printf("%s\n",s);
}
int ch(char g)
{
if ((g=='a') || (g=='e') || (g=='i') || (g=='o') || (g=='u'))
    return 1;
else
    return 0;
}
