#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d;
printf("Nhap toa do A(a,b) va B(c,d):\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("Do dai doan thang AB la:%f",sqrt((c-a)*(c-a)+(d-b)*(d-b)));
}

