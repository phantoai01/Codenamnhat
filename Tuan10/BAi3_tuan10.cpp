#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    for(int i=2;i<=n;i++)
        while (n%i == 0  ) {
            cout << i << " ";
            n /= i;
        }
    system("pause");
    return 0;
}
 
