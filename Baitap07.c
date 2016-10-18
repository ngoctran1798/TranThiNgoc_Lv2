#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a,b,c,h,r,n;
    printf("nhap gia tri cac canh a,b,c,h,r\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&h,&r);
    printf("nhap n\n");
    scanf("%d",&n);
    switch (n)
    {
        case 1: printf("dien tich hinh tam giac s=%d",(c*h)/2);
                printf("chu vi hinh tam giac cv=%d",(a+b+c));
            break;
        case 2: printf("dien tich hinh vuong s=%d",a*a);
                printf("chu vi hinh vuong cv=%d",4*a);
            break;
        case 3: printf("dien tich hinh chu nhat s=%d",a*b);
                printf("chu vi hinh chu nhat cv=%d",(a+b)*2);
            break;
        case 4: printf("dien tich hinh tron s=%f",(float)r*r*3.14);
                printf("chu vi hinh tron cv=%f",(float)2*r*3.14);
            break;
    }
}
