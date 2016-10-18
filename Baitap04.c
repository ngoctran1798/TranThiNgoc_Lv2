#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float a,b,c,delta;
   printf("Nhap so a: ");
   scanf("%f",&a);
   printf("Nhap so b: ");
   scanf("%f",&b);
   printf("Nhap so c: ");
   scanf("%f",&c);
if (a==0)
    if (b==0)
            if (c==0)
                printf("Phuong trinh vo so nghiem.");
            else
                printf("Phuong trinh vo nghiem");
                     else
                         printf("Phuong trinh co 1 nghiem\: %0.2f",-c/b);
   else {

    delta=b*b - 4*a*c;

        if (delta<0)
        printf("Phuong trinh vo nghiem");
      else
        if(delta==0)
            printf("Phuong trinh co nghiem kep\: %0.2f",-b/(2*a));
         else
            {
               printf("Phuong trinh co nghiem 1\: %0.2f\n",(-b-sqrt(delta))/(2*a));
               printf("Phuong trinh co nghiem 2\: %.2f\n",(-b+sqrt(delta))/(2*a));
            }
   }
}

