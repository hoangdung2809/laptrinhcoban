#include <iostream>
using namespace std;

int main() {
    double meal = 88.67;
    double thue = meal * 0.0675;
    double tip = (meal + thue) * 0.20;
    double total = meal + thue + tip;

    cout << "Chi phi bua an: " << meal << endl;
    cout << "Thue: " << thue << endl;
    cout << "Tip: " << tip << endl;
    cout << "Tong hoa don: " << total;
    return 0;
}
