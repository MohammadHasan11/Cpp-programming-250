#include <iostream>
using namespace std;

int main() {
    int n, temp, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == n && n > 0) {
        cout << n << " is a Strong number." << endl;
    } else {
        cout << n << " is not a Strong number." << endl;
    }

    return 0;
}