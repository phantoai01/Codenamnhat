#include<stdio.h>
#include<math.h>
void Ngto(int n) {
	int i;
    int ngt=1;
    if(n==1)
	printf("K");
        else {
            for(i=2; i<=sqrt(n); i++) {
                 ngt=1;
            if(n%i==0) {
            ngt=0;
            }
            }
        if(ngt==1)
            printf("%d la so nguyen to",n);
        else
            printf("%d khong phai la so nguyen to",n);
            }
}
int main() {
        int n;
        printf("Nhap n: ");
        scanf("%d",&n);
        
		Ngto(n);

}
