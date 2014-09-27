#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
long long int fac(int a)
{
    if(a==0 || a==1)
    return 1;
    int i;
    long long int s=1;
    for(i=1;i<=a;i++)
    s=s*i;
    return s;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[30];
        scanf("%s",s);
        int i,j,l=strlen(s);
        int a[l],b[l],d[10]={0};
        for(i=0;i<l;i++)
        {a[i]=(int)s[i]-'0';
        b[i]=(int)s[i]-'0';}
        for(i=0;i<l;i++)
        d[s[i]-'0']++;
        sort(a,a+l);
        if(a[0]==0)
        {

        }
        else
        {
        i=0;
        long long int k=0;
        while(i<l)
        {
            int c=0;
            for(j=0;j<l;j++)
            {
                if(a[j]<b[i] && d[a[j]]>0)
                {
                    //printf("%d %d\n",a[j],b[i]);
                    c++;
                }
            }
            d[b[i]]--;
            k=k+c*fac(l-i-1);
            //printf("f %lld %d\n",k,c);
            i++;
            /*for(j=0;j<10;j++)
            printf("%d ",d[j]);
            printf("\n");*/
        }
        }
    }
    return 0;
}
