#include<stdio.h>
void main()
{
int n,i,m=0,biendem=0;

printf("nhap so bat ki: ");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("\nSo vua nhap khong la so nguyen to.");
biendem=1;
}
}
if(biendem==0)
 printf("\nSo vua nhap la so nguyen to.");
}
