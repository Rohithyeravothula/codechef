#include<stdio.h>
main()
{
    int t,i,j,s,p;
    scanf("%d",&t);
    char a,b,c;
    for(i=0;i<t;i++)
    {
        s=0;
        scanf("%c %c %c",&a,&b,&c);
        if((a='J')||(a='K')||(a='Q'))
            {s=s+10;

            }
        else if (a='A')
            s=s+11;
        else if(isdigit(a))
            {

            if((int)a<10)
                s=s+(int)c;
            else
                printf("INVALID\n");
        }
        else
        {printf("INVALID\n");
        break;
        }
        if((b='J')||(b='K')||(b='Q'))
            s=s+10;
        else if (b='A')
            s=s+11;
        else if(isdigit(b))
            {
            if((int)b<10)
                s=s+(int)c;
            elseprintf("INVALID\n");
        }
        else
        {printf("INVALID\n");
        break;
        }
        if((c='J')||(c='K')||(c='Q'))
            s=s+10;
        else if (c='A')
            s=s+11;
        else if(isdigit(c))
        {
            if((int)c<10)
                s=s+(int)c;
            elseprintf("INVALID\n");
        }


        else
        {printf("INVALID\n");
        break;
        }
        if(s>21)
        {
            if((a='A')||(b='A')||(c='A'))
                s=s-10;
        }
        if((s<21)&&(s>11))
            printf("STAND\n");
        if(s<11)
            printf("HIT\n");

        }
}
