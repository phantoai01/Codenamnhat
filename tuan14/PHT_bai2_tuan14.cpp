#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct sach{
    char masach[10];
    char tensach[50];
    char tacgia[50];
    int namxb;
};

void nhaps(struct sach *p){
    printf("\nNhap ma sach : ");
    gets(p->masach);
    printf("\nNhap ten sach : ");
    gets(p->tensach);
    printf("\nNhap ten tac gia : ");
    gets(p->tacgia);
    printf("\nNhap nam xuat ban : ");
    scanf("%d",&p->namxb);
}

void Nhapds(int n , struct sach *p){
    for(int i = 0 ; i < n ; i++){
        fflush(stdin);
        printf("\nMoi nhap sach thu %d : ",i+1);
        nhaps(p+i);
    }
}

int Ktsach(struct sach *p){
    int kt = 0;
    char tin[50] = "tin hoc dai cuong";
    if(strcmp(p->tensach,tin) == 0){
        kt = 1;
    }
    return kt;
}

void Timsach(int n , struct sach *p){
    printf("\nCac sach co ten 'tin hoc dai cuong' la : ");
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        int x = Ktsach(p+i);
        if(x == 1){
            printf("\nTen sach : ");
            puts((p+i)->tensach);
            printf("\nMa sach : ");
            puts((p+i)->masach);
            printf("\nTen tac gia : ");
            puts((p+i)->tacgia);
            printf("\nNam xuat ban : ");
            printf("%d",(p+i)->namxb);
        }
    }
}

void Sapxep(int n , struct sach *p){
    struct sach temp;
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j =  i + 1 ; j < n ; j++){
            if(strcmp((p+i)->tensach,(p+j)->tensach) > 0){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}

void Xuatsx(int n , struct sach *p){
    Sapxep(n,p);
    printf("\nDanh sach sau khi sap xep theo ten : ");
    for(int i = 0 ; i < n ; i++){
        printf("\nTen sach : ");
        puts((p+i)->tensach);
        printf("\nMa sach : ");
        puts((p+i)->masach);
        printf("\nTen tac gia : ");
        puts((p+i)->tacgia);
        printf("\nNam xuat ban : ");
        printf("%d",(p+i)->namxb);
    }
}

int main(){
    int n;
    struct sach *p;
    do{
        printf("\nNhap so quyen sach : ");
        scanf("%d",&n);
    }while(n < 1 || n > 1000);
    struct sach tv[n];
    p = &tv[0];
    Nhapds(n,p);
    Timsach(n,p);
    Xuatsx(n,p);
}	
