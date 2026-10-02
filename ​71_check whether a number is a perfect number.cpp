#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n && n > 0) {
        cout << n << " is a Perfect number." << endl;
    } else {
        cout << n << " is not a Perfect number." << endl;
    }

    return 0;
}