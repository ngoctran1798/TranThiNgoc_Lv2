#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4,c1,c2;
    double x,y;
    printf ("nhap toa do cua A\n");
    scanf ("%f",&x1);
    scanf ("%f",&y1);
    printf ("nhap toa do cua B\n");
    scanf ("%f",&x2);
    scanf ("%f",&y2);
    printf ("nhap toa do cua C\n");
    scanf ("%f",&x3);
    scanf ("%f",&y3);
    printf ("nhap toa do cua D\n");
    scanf ("%f",&x4);
    scanf ("%f",&y4);
    float a1=x2-x1;
    printf("a1=%f",a1);
    float b1=y2-y1;
    printf("b1=%f",b1);
    scanf ("%f",&c1);
    float a2=x4-x3;
    printf("a2=%f",a2);
    float b2=y4-y3;
    printf("b2=%f",b2);
    scanf ("%f",&c2);
    printf("giai he phuong trinh bac nhat hai an\n");
    printf("a1*x+b1*y+c1\n");
    printf("a2*x+b2*y+c2\n");
    printf("\a\n");
    double d=a1*b2-a2*b1;
    double dx=c1*b2-c2*b1;
    double dy=a1*c2-a2*1;
    if (d)
    {
        x=dx/d;
        y=dy/d;
        printf("he phuong trinh co mot nghiem duy nhat (x,y)=(%.1f,%.1f)",x,y);

    }
    else if (dx)
        printf("he phuong trinh vo nghiem");
    else printf("he phuong trinh vo so nghiem");
    return;
}

