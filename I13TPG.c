#include<stdio.h>
#include<string.h>
main()
{
    char s[1000050];
    scanf("%s",s);
    int a[26],i,l=strlen(s),k=-1;
    for(i=0;i<l;i++)
        a[s[i]-'a']++;
    for(i=0;i<26;i++)
        {a[i]=a[i]%2;
        k=k+a[i];}
    if(k%2==0)
        printf("Ram");
    else
        printf("Shyam\n");
    return 0;
}
