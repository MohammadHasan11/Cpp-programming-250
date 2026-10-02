#include <iostream>
using namespace std;

int main() {
    double base, result = 1;
    int exponent;

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    int exp = exponent < 0 ? -exponent : exponent;

    for (int i = 1; i <= exp; i++) {
        result *= base;
    }

    if (exponent < 0) {
        result = 1.0 / result;
    }

    cout << "Result: " << result << endl;
    return 0;
}