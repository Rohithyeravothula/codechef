#include<stdio.h>
#include<string.h>
main()
{
	int n;
	scanf("%d",&n);
	char a[n];
	scanf("%s",a);
	int l=strlen(a);
	int i=0;
	while(i<l)
	{
		int c=1;
		while(a[i]==a[i+1])
			{
				c++;
				i=i+1;
			}
		printf("%c%d",a[i],c);
		i=i+1;
		if(!(i<l))
			break;
	}
	printf("\n");
	return 0;
}