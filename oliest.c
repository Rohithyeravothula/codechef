#include<stdio.h>
main()
{
        char s[100050];
        scanf("%s",s);
        int a[26]={0};
        int i,l=strlen(s);
        for(i=0;i<l;i++)
            a[s[i]-'a']++;
        for(i=0;i<26;i++)
            a[i]=a[i]%2;
        int k=0;
        for(i=0;i<26;i++)
            k=k+a[i];
        if(k<2)
            printf("YES\n");
        else
            printf("NO\n");
    return 0;
}
