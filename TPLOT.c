#include<stdio.h>
main()
{

    int a[7],b[6];
    int i,j,k,n,s,l;
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    int v=1;
    //int t=a[6];



    for(i=0;i<6;i++)
    {   s=0;
        for(j=0;j<6;j++)
        {
            scanf("%d",&b[j]);
            for(k=0;k<7;k++)
            if(b[j]==a[k])
            s=s+1;

        }

    if(s==6)
    {
        for(l=0;l<6;l++)
        if(b[l]==a[6])
            v=0;

    }

     switch(s)
     {
     case 3:
        {
            printf("Fifth Parking slot\n");
            break;
        }
     case 4:
        {
            printf("Fourth Parking slot\n");
            break;
        }
     case 5:
        {
            printf("%Third Parking Slot\n");
            break;

        }
     case 6:
        {
            if(v==0)
                printf("%SSecond Parking slot\n");
            else
                printf("First Parking slot\n");
            break;

        }

     default:
        { printf("No Parking slot\n");
        break;

        }

     }

    }
return 0;
}


