#include<stdio.h>
#include<string.h>
char* reverse(char *a,int l)
{
	char b[l+1],i;
	for(i=0;i<l+1;i++)
			b[i]=a[l-i-1];
	b[l]='\n';
	printf("%s\n",b);
}
main()
{
	int n;
	scanf("%d",&n);
	char a[n];
	scanf("%s",a);
	int l=strlen(a);
	reverse(a,l);
	return 0;
}