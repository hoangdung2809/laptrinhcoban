#include <iostream>
using namespace std;

int main() {
    double coverage = 340;
    double height = 6, length = 100;

    double area = height * length * 2; // Sơn 2 lớp
    double gallons = area / coverage;

    cout << "So gallon can dung: " << gallons;
    return 0;
}
