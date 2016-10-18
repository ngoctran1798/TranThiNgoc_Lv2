#include <stdio.h>
#include <math.h>
void main ()
{
    float a1,a2,a3,a4,b1,b2,b3,b4,cosGoc,d1,d2,d1,d2;
    printf("nhap lan luot toa do A;B;C;D \n");
    scanf("%f%f",&a1,&b1);
    scanf("%f%f",&a2,&b2);
    scanf("%f%f",&a3,&b3);
    scanf("%f%f",&a4,&b4);
    d1=b2-b1;
    d1=a1-a2;
    d2=b4-b3;
    d2=a3-a4;
    cosGoc= (a1*a2+b1*b2)/( sqrt(a1*a1+b1*b1)*sqrt(a2*a2+b2*b2));
    if (cosGoc<0 ) cosGoc=-cosGoc;
    if ((cosGoc==1) || (cosGoc==0)) printf ("giua hai duong thang khong co goc ton tai");
    else printf("cos goc giua hai doan AB=%f",cosGoc);
}
