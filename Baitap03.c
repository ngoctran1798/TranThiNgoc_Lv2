#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float a,b,c,delta,x1,x2;
	printf("Phuong trinh bac 2 co dang ax^2 + bx + c = 0. Nhap a :");
	scanf("%f",&a);
	printf("Nhap b :");
	scanf("%f",&b);
	printf("Nhap c :");
	scanf("%f",&c);
	{
		delta=b*b-4*a*c ;
		if (delta<0) printf("Phuong trinh vo nghiem");
		if (delta==0)
		{
			x1=-b/(2*a);
			printf("Phuong trinh da nghiem kep:%f",x1);
		}
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet");
			printf("%f",x1);
			printf("%f",x2);
		}
	}
}
