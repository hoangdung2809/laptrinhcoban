#include <iostream>
using namespace std;

int main() {
    double a=15.59, b=24.59, c=6.59, d=12.59, e=3.59;
    double sub = a+b+c+d+e;
    double tax = sub * 0.07;
    double total = sub + tax;

    cout << "Tong tam tinh: " << sub << endl;
    cout << "Thue: " << tax << endl;
    cout << "Tong thanh toan: " << total;
    return 0;
}
