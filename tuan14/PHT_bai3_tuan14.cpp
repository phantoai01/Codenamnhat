#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct sophuc
{
	int a;
	int b;
};
int main()
{
	struct sophuc sp1,sp2;
	int i,n;
	printf("\n Nhap so phuc 1 :");
	printf("\n Nhap phan thuc :");
	scanf("%d",&sp1.a);
	printf("\n Nhap phan ao :");
	scanf("%d",&sp1.b);
	printf("\n Nhap so phuc 2 :");
	printf("\n Nhap phan thuc :");
	scanf("%d",&sp2.a);
	printf("\n Nhap phan ao :");
	scanf("%d",&sp2.b);
	printf("\n %d+%di",sp1.a,sp1.b);
	printf("\n %d+%di",sp2.a,sp2.b);
	printf( "\n  tong : %d + %di",sp1.a+sp2.a,sp1.b+sp2.b );  
    printf( "\n  hieu : %d + %di",sp1.a-sp2.a,sp1.b-sp2.b ); 
    printf( "\n  tich : %d + %di",sp1.a*sp2.a-sp1.b+sp2.b,sp1.a*sp2.b+sp1.b*sp2.a ); 
	if ((sp2.a!=0) && (sp2.b!=0)){
	printf( "\nthuong : %9.2f + %9.2fi",((float)(sp1.a*sp2.a)+(sp1.b*sp2.b))/(sp2.a*sp2.a+sp2.b*sp2.b),((float)(sp2.a*sp1.b-sp1.a*sp2.b)/(sp2.a*sp2.a+sp2.b*sp2.b)));
	} 
	return 0;
	}
