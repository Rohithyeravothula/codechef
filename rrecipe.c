#include<stdio.h>
#include<string.h>
#include<math.h>
#define mod 10000009
int scan(){
	int t=0;
	char c;
	c=getchar_unlocked();
	while(c<'0' || c>'9')
		c=getchar_unlocked();
	while(c>='0' && c<='9'){
		t=(t<<3)+(t<<1)+c-'0';
		c=getchar_unlocked();
	}
	return(t);
}
main()
{
    int t;
    t=scan();
    while(t--)
    {
        char a[1000050];
        gets(a);
        int n=strlen(a);
        int i,l=(1+n)/2;
        long long int s=1;
        for(i=0;i<l;i++)
        {if(a[i]==a[n-i-1])
        {
            if(a[i]=='?')
            s=(s*26)%mod;
        }
        else if((a[i]!='?') && (a[n-i-1]!='?'))
        {
            if()
                {s=0;
        break;}}
        }
        printf("%lld\n",s);
    }
    return 0;
}
