#include<stdio.h>
#include<string.h>
main()
{
int n,q,i,j,k,y;
long long int mx_p=-1000000009;
char f[1010];
scanf("%d",&n);
char si[1010][1010];
long long int vi[1010];
char qi[1010];
char z[1010];
for(i=0;i<n;i++)
scanf("%s %lld",si[i],&vi[i]);
scanf("%d",&q);
for(i=0;i<q;i++)
{
    scanf(" %s",qi);
    printf("%s\n",qi);
    y=0;
    for(j=0;j<n;j++)
    {
        strcpy(z,si[j]);
        k=strlen(qi);
        z[k]=NULL;
        //printf("%s\n",z);
        if((strcmp(qi,z)==0) && (vi[j]>mx_p))
            {
                mx_p=vi[j];
                strcpy(f,si[j]);

                y=1;
            }

    }
    if(y==0)
        printf("NO\n");
    else
        printf("%s\n",f);
}
}
