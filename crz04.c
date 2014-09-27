#include<stdio.h>
main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       float h,m;
       scanf("%f %f",&h,&m);
       if((h>=0 && h<24) && (m>=0 && m<59))
        {
            if(h>=12)
                h=h-12;
            float p = 30 * (h - (m/5)) + (m/2);
            if(p<0)
                p=p+360;
            if(p>180)
                p=360-p;

            printf("%.1f\n",p);
        }
        else
            printf("Invalid Time\n");
   }
   return 0;

}
