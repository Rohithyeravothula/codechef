#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<string.h>

int main ()
{
    printf("running\n");
int i,size;
FILE *fp,*fp1;
fp = fopen("final.txt", "r");

fseek(fp, 0, SEEK_END);
size = ftell(fp);
fseek(fp, 0, SEEK_SET);

unsigned char a[size];
for(i=0;i<size;i++)
{
fscanf(fp,"%c", &a[i]);
}
printf("running\n");
fp1 = fopen("append.txt","w+");
int k;
  long int quotient;
  for(k=0;k<size;k++)
{
     short int binaryNumber[50]={0};
	int l=1;
       quotient = a[k];
   while(quotient>0)
	{
   binaryNumber[l++]= quotient % 2;
   quotient = quotient / 2;
	}
    int j;
	for(j =8 ;j>=1 ;j--)
	{
	fprintf(fp1,"%d",binaryNumber[j]);
	}
}
printf("running\n");
FILE *pf;
pf = fopen("wavfile.txt","w+");
char s[10];
while(!feof(fp1))
{
fgets(s,8,fp1);
strcat(s,"0");
fprintf(pf,"%s\n",s);
}

return 0;
}
