#include<stdio.h>
#include<stdlib.h>

struct SV
{
    char hoten[100];
    int namsinh;
    double diemtb;
};

void Nhapsv(struct SV *sv1){
    printf("\nNhap ho ten : ");
    gets(sv1->hoten);
    printf("\nNhap nam sinh : ");
    scanf("%d",&sv1->namsinh);
    printf("\nNhap diem trung binh : ");
    scanf("%lf",&sv1->diemtb);
}

void Nhapds(int n , struct SV * p){
    for(int i = 0 ; i < n ; i++){
        fflush(stdin);
        printf("\nNhap thong tin sinh vien %d : ",i+1);
        Nhapsv(p+i);
    }
}

void SvKha(struct SV *sv1){
    if(sv1->diemtb >= 6.5 && sv1->diemtb < 8){
        puts(sv1->hoten);
    }
}

void XuatSvK(int n ,struct SV *p){
    printf("\nDanh sach sinh vien xep loai kha la : \n");
    for(int i = 0 ; i < n ; i++){
        SvKha(p+i);
    }
}

void Sv97(struct SV *sv1){
    if(sv1->namsinh < 1997){
        puts(sv1->hoten);
    }
}

void XuatSv97(int n , struct SV *p){
    printf("\nDanh Sach sinh vien nam sinh <1997 : \n");
    for(int i = 0 ; i < n ; i++){
        Sv97(p+i);
    }
}

void SapXep(int n , struct SV *p){
    struct SV temp;
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if((p+i)->diemtb < (p+j)->diemtb){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}

void XuatSX(int n , struct SV *p){
    SapXep(n,p);
    printf("\nDanh sach sinh vien sau khi sap xep giam dan theo DTB : \n");
    for(int i = 0 ; i < n ; i++){
        printf("\nThong tin sinh vien %d : ",i+1);
        printf("\nHo ten : ");
        puts((p+i)->hoten);
        printf("\nNam sinh : ");
        printf("%d",(p+i)->namsinh);
        printf("\nDiem Trung Binh : ");
        printf("%lf",(p+i)->diemtb);
    }
}

int main(){
    int n;
    struct SV *p;
    do{
        printf("Nhap so luong sinh vien : ");
        scanf("%d",&n);
        if(n < 1 || n > 1000);
    }while(n < 1 || n > 1000);
    struct SV sv1[n];
    p = &sv1[0];
    Nhapds(n,p);
    XuatSvK(n,p);
    XuatSv97(n,p);
    XuatSX(n,p);
}
