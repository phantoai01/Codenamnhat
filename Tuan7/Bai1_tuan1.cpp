#include "stdio.h"
#include "conio.h"
#include "math.h"
#define PI 3.14159
int main()
{
    int n;
    float a, b, c ;
    float P;
    float S;
       {
            do
            {
                printf("\n Nhap cac canh cua tam giac:\n");
                scanf("%f %f %f", &a, &b, &c);
            }
            while(a < 0 || b < 0 || c < 0 || (a + b) <= c || (a + c) <= b || (b + c) <= a);
            P = (a + b + c);
            S = sqrt(P*(P/2 - a)*(P/2 - b)*(P/2 - c)/2);
            printf("\n Chu vi tam giac : %f ", P);
            printf("\n Dien tich tam giac : %f ", S);
            printf("\n Exit");
    }
    getch();
}
