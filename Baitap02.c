#include<stdio.h>
#include<math.h>
void main()
{
int n,i;
printf("Nhap so nguyen duong n\n");
scanf("%d", &n);
i = sqrt(n);
if (n==i*i)
{
printf("%d so chinh phuong",n);
}
else
printf("%d khong la so chinh phuong",n);
}
