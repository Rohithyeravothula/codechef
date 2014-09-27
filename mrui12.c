#include<stdio.h>
#include<string.h>
main()
{
    int a[10]={0,1,2,3,4,5,4,3,2,1};
    char b[10][10]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[20];
        scanf("%s",s);
        int l=strlen(s);
        int i;
        int c=0;
        for(i=0;i<l;i++)
        {
            int z;
            z=(int)s[i]-48;
            printf("%s",b[z]);
            c=c+a[z];
        }
        printf("\n%d\n",c);
    }
    return 0;
}
