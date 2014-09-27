#include<stdio.h>
main()
{
        int i;
        char s[1100];
        scanf("%s",s);
        int a[150]={0};
        for(i=0;i<strlen(s);i++)
        a[(int)s[i]-'A']++;
        for(i=0;i<strlen(s);i++)
        if(a[(int)s[i]-'A']!=0)
        {
            printf("%c%d",s[i],a[(int)s[i]-'A']);
            a[(int)s[i]-'A']=0;
        }
        printf("\n");

    return 0;
}
