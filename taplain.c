#include<stdio.h>
#define M 1000000007
long long fac(long long n)
{
    long long int s=1,i;
    for(i=2;i<n+1;i++)
        s=(s*i)%M;
    return s;
}
long long fast_pow(long long int a,long long int n)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        printf("%lld\n",power);
        if(power&1)
            {result = result*value;
            result = result%M;}
        value = value*value;
        value = value%M;
        power = 2;
    }
    return result;
}

main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char s[520];
        gets(s);
        long long int i,l=strlen(s);
        int a[200]={0};
        for(i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                a[s[i]-'A']++;
            else
                a[s[i]-'a']++;
        }
        long long int p=fac(l);
       for(i=0;i<100;i++)
        printf("%lld\n",fast_pow(2,M-2)%M);
       printf("%lld\n",p);
    }
    return 0;
}

