#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[110];
        scanf("%s",a);
        int l=strlen(a);
        int i=1;
        int z=0;
        while(i<l)
        {
            int c=1;
            while(a[i]==a[i-1])
            {
            c=c+1;
            i=i+1;}
            if(c%2==0)
            {z=z+1;}
            i=i+1;
        }
        printf("%d\n",z);
    }
    return 0;

}
