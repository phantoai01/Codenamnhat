#include <iostream>
using namespace std;

// Cho 2 s? nguyên duong a và b. Hãy tìm u?c chung l?n nh?t c?a 2 s? này.
// Input : 2 s? a,b
// Output : U?c chung l?n nh?t c?a 2 s? a, b
int UCLN(int a, int b)
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a; // or return b; a = b
}

// Cho 2 s? nguyên duong a và b. Hãy tìm b?i chung nh? nh?t c?a 2 s? này
// Input : 2 s? a,b
// Output : B?i chung nh? nh?t
int BCNN(int a, int b)
{
    int result = UCLN(a, b);
    return a * b / result;
}

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    int result = UCLN(a, b);
    cout << "UCLN : "<<result;

    cout << "\n";

    result = BCNN(a, b);
    cout << "BCNN : " << result << endl;
       system("pause");
}
