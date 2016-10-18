#include <stdio.h>
void main ()
{   float a;
    int kiemTra;
    printf("nhap so can kiem tra : \n");
    scanf("%f",&a);
    kiemTra=(int)a;
    if (a-kiemTra==0.5) printf("%f là so ban nguyen",a);
    else printf("%f khong la so ban nguyen",a);
}
