#include<stdio.h>
#include<math.h>
main()
{
    int i,j,p,d;
    FILE *fp;
    fp=fopen("prime.txt","a");
    for(i=2;i<10000;i++)
    {
        p=sqrt(i);
        d=0;
        for(j=2;j<p+1;j++)
        {
            if(i%j==0)
            {d=1;
            break;
            }
        }
        if(d==0)
            fprintf(fp,"%d,",i);
    }
    fclose(fp);
    return 0;
}
