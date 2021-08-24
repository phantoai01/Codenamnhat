#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
int nhapmang(int a[][MAX], int &m, int &n);
int xuatmang(int a[][MAX], int m, int n);
double tongdong(int a[][MAX], int m, int n,int x);
int main()
{
	int a[MAX][MAX], m,n,x;
	nhapmang(a,m,n);
	printf("\nnoi dung cua ma tran\n");
	xuatmang(a,m,n);
	printf("\nNhap dong can tinh: ");
	scanf("%d",&x);
	double t=tongdong(a,m,n,x);
	printf("\nTong dong %d la: %8.2f",x,t);
	getch();
}
int nhapmang(int a[][MAX], int &m, int &n)
{
	int i,j;
	do
	{
		printf("nhap vao so dong cua ma tran: ");
		scanf("%d",&m);
	}while(m<=0);
	do
	{
		printf("nhap vao so cot cua ma tran: ");
		scanf("%d",&n);
	}while(n<=0);
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			printf("\nso phan tu a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int xuatmang(int a[][MAX], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
double tongdong(int a[][MAX], int m, int n,int x)
{
	double sum=0;
	for(int j=0;j<n;j++)
		sum=sum+a[x][j];
	return sum;
}
