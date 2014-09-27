#include<stdio.h>
#include<string.h>
main()
{
   int k,n;
   scanf("%d %d",&k,&n);
   char a[60][60];
   int i;
   for(i=0;i<k;i++)
       scanf("%s",a[i]);
    char g[60];
    for(i=0;i<n;i++)
        {
            scanf("%s",g);
            int l;
            l=strlen(g);
            if(l>=47)
                printf("Good\n");
            else
            {
                int j;
                int u=0;
                for(j=0;j<k;j++)
                        if(strstr(g,a[j])!=NULL)
                {
                    printf("Good\n");
                    u=1;
                    break;
                }

                if(u==0)
                    printf("Bad\n");
            }
        }
   return 0;
}
