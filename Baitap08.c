#include <stdio.h>
#include <math.h>
void main ()
{
    int so;
    float x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d,s,p,pi,r;
    printf("nhap lua chon : ");
    printf("1: tam giac\n");
    printf("2: hinh vuong\n");
    printf("3: hinh chu nhat\n");
    printf("4: hinh tron\n");
    scanf("%d",&so);
    switch (so)
    {


case 1:
    {
    printf("nhap toa do 3 dinh tam giac \n");
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    scanf("%f%f",&x3,&y3);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    p = (a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("dien tich tam giac %f\n", s);
    break;
    }
case 2:
    {
    printf("nhap toa do canh hinh vuong : \n");
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    s=a*a;
    printf("dien tich hinh vuong la: \n%f",s);
    break;
    }
case 3:
    {
    printf("nhap toa do 3 dinh lien tiep cua hinh chu nhat  : \n");
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    scanf("%f%f",&x3,&y3);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    if (a==sqrt(b*b+c*c)) a=c;
    if (b==sqrt(a*a+c*c)) b=c;
    printf("dien tich hinh chu nhat la: \n%f",a*b);
    break;
    }
case 4:
    {
    pi=3.1416;
    printf("nhap toa do tam va mot diem thuoc duong tron\n");
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    r=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    s=r*r*pi;
    printf("dien tich hinh tron: \n %f",s);
    break;
    }
    default : printf ("ba nhap sai so");
}
}

