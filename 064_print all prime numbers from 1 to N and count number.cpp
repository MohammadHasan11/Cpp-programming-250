#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter N: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
            count++;
        }
    }

    cout << "\nTotal prime numbers: " << count << endl;
    return 0;
}