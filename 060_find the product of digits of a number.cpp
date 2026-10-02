#include <iostream>
using namespace std;

int main() {
    long long n;
    long long product = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        product = 0;
    } else {
        if (n < 0) n = -n;
        while (n > 0) {
            product *= (n % 10);
            n /= 10;
        }
    }

    cout << "Product of digits: " << product << endl;
    return 0;
}