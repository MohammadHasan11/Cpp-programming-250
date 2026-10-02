#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a Prime number." << endl;
    } else {
        cout << n << " is not a Prime number." << endl;
    }

    return 0;
}