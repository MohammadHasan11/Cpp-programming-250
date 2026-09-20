#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, r, t;
    cin >> p >> r >> t;
    double amount = p * pow((1 + r / 100), t);
    cout << amount - p;
    return 0;
}