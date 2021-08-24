#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
	float a, b, c, d, Tong, Hieu, Tich, Thuong;
	printf("\n Nhap so nguyen a, b, c, d: "); scanf("%f%f%f%f", &a, &b, &c, &d);
	printf("%f / %f = %f \n", a, b, a / b);
    printf("%f / %f = %f \n", c, d, c / d);
    Tong = a/b + c/d;
    Hieu = a/b + c/d;
    Tich = (a/b) * (c/d);
    Thuong = (a/b) / (c/d);
    printf("Tong = %f\nHieu = %f\nTich = %f\nThuong = %f", Tong, Hieu, Tich, Thuong);
    getch();
}
