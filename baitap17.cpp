#include <iostream>
using namespace std;

int main() {
    int shares = 750;
    double price = 35.0;
    double commissionRate = 0.02;

    double cost = shares * price;
    double commission = cost * commissionRate;
    double total = cost + commission;

    cout << "Tien co phieu: " << cost << endl;
    cout << "Hoa hong: " << commission << endl;
    cout << "Tong thanh toan: " << total;
    return 0;
}
