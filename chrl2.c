#include<stdio.h>
#include<string.h>
main()
{
    char s[100020];
    scanf("%s",s);
    int a[30]={0};
    long long int l=strlen(s),i;
    for(i=0;i<l;i++)
        a[(int)s[i]-'A']++;
    long long int m=a[2];
    printf("%lld\n",m);
    if(m>a[7])
        m=a[7];
    if(m>a[4])
        m=a[4];
    if(m>a[5])
        m=a[5];
    printf("%lld\n",m);
    return 0;
}
