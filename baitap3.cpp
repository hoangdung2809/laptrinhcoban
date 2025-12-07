#include <iostream>
using namespace std;

int main() {
    double gioHang = 95;
    double thueTieuBang = 0.04;
    double thueQuan = 0.02;

    double tongThue = gioHang * (thueTieuBang + thueQuan);
    cout << "Tong thue: " << tongThue;
    return 0;
}
