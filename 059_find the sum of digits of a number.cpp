#include <iostream>
using namespace std;

int main() {
    long long n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) n = -n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}