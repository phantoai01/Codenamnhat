#include<stdio.h>

#include<stdlib.h>

#include<math.h>

#define max 100

void SoHH(int n) {

            int i,tong = 0;

            for(i=1; i<n; i++) {

                        if(n%i == 0)

                                    tong = tong + i;

            }

            if(tong == n) {

                        printf("%d",n);

            }

}

void SoNT(int n) {

            int i,ok = 1;

            for(i = 2; i<=sqrt(n); i++) {

                        if(n%i == 0) {

                                    ok = 0;

                                    break;

                        }

            }

            if(ok == 1)

                        printf("%d",n);

}

void Nhap(int a[max][max],int m, int n) {

            printf("Nhap mang:\n");

            int i,j;

            for(i=0; i<m; i++) {

                        for(j=0; j<n; j++) {

                                    printf("[%d][%d] = ",i,j);

                                    scanf("%d",&a[i][j]);

                        }

            }

}

void Xuat(int a[max][max],int m, int n) {

            int i,j;

            for(i=0; i<m; i++) {

                        for(j=0; j<n; j++) {

                                    printf("%d\t",a[i][j]);

                        }

                        printf("\n");

            }

}

void Tong(int a[max][max],int b[max][max],int c[max][max],int m,int n,int p,int q) {

            int i,j;

            if(m == p && n == q) {

                        for(i=0; i<m; i++) {

                                    for(j=0; j<n; j++) {

                                                c[i][j] = a[i][j] + b[i][j];

                                    }

                                    printf("\n");

                        }

            }

            Xuat(c,m,n);

}

void Hieu(int a[max][max],int b[max][max],int c[max][max],int m,int n,int p,int q) {

            int i,j;

            if(m == p && n == q) {

                        for(i=0; i<m; i++) {

                                    for(j=0; j<n; j++) {

                                                c[i][j] = a[i][j] - b[i][j];

                                    }

                                    printf("\n");

                        }

            }

            Xuat(c,m,n);

}

void Tich(int a[max][max],int b[max][max],int c[max][max],int m,int n,int p,int q) {

            int i,j,k;

            if(n == p) {

                        for(i = 0; i<m ; i++)

                                    for(k = 0; k<q ; k++) {

                                                c[i][k] = 0;

                                                for(j = 0; j<n ; j++)

                                                            c[i][k] = c[i][k] + a[i][j]*b[j][k];

                                    }

            }

            Xuat(c,m,n);

}

void TimHH(int a[max][max],int m,int n) {

            int i,j;

            for(i=0; i<m; i++) {

                        for(j=0; j<n; j++) {

                                    SoHH(a[i][j]);

                                    printf("\t");

                        }

                        printf("\n");

            }

}

void TimNT(int a[max][max],int m,int n) {

            int i,j;

            for(i=0; i<m; i++) {

                        for(j=0; j<n; j++) {

                                    SoNT(a[i][j]);

                                    printf("\t");

                        }

                        printf("\n");

            }

}

int main() {

            int a[max][max],b[max][max],c[max][max],m,n,p,q;

            printf("Nhap so hang cua mang a: ");

            scanf("%d",&m);

            printf("Nhap so cot cua mang a: ");

            scanf("%d",&n);

            Nhap(a,m,n);

            printf("Mang dau tien co dang:\n");

            Xuat(a,m,n);

            printf("Nhap so hang cua mang b: ");

            scanf("%d",&p);

            printf("Nhap so cot cua mang b: ");

            scanf("%d",&q);

            Nhap(b,p,q);

            printf("Mang thu hai co dang:\n");

            Xuat(b,p,q);

            printf("Tong cua hai ma tran la:\n");

            Tong(a,b,c,m,n,p,q);

            printf("\nHieu cua hai ma tran la:\n");

            Hieu(a,b,c,m,n,p,q);

            printf("\nTich cua hai ma tran la:\n");

            Tich(a,b,c,m,n,p,q);

            printf("\n");

    

            return 0;

}

 
