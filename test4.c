#include<stdio.h>
//#include<conio.h>
#include<string.h>

int check(char s[],char p)
{
    int i=0;

    for(i=0;s[i]!='\0';i++)
    {
                           if(s[i]==p)
                           {
                               s[i]='1';
                              return 1;
                           }
    }
    return 0;
}

int main()
{
     char s[110][110],f[110],temp,c;
     int i=0,x=-1;
     int n=0,j=0,flag=0,l=0;

     scanf("%d%c",&n,&c);

     for(i=0;i<n;i++)
     {
                     scanf("%s",s[i]);
     }


     l=strlen(s[0]);

     for(i=0;i<l;i++)
     {
                     for(j=1;j<n;j++)
                     {
                            if(check(s[j],s[0][i])==0)
                            {
                                                                  flag=1;
                                                                  break;
                            }
                     }
                     if(flag==0)
                     {
                                x++;
                                f[x]=s[0][i];
                     }
                     flag=0;
     }

      if(x!=-1)
     {
     for(i=0;i<=x;i++)
     for(j=0;j<=x-i-1;j++)
     {
                          if(((int)f[j])>((int)f[j+1]))
                          {
                                                   temp=f[j];
                                                   f[j]=f[j+1];
                                                   f[j+1]=temp;
                          }
     }
   //  f[x+1]='\0';
     for(i=0;i<=x;i++)
     printf("%c",f[i]);
     }


     else
     printf("no such string");
     printf("\n");

   // getch();

     return 0;
}
