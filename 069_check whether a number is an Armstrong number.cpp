#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, digits = 0, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;

    original = n;
    int temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == original) {
        cout << original << " is an Armstrong number." << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }

    return 0;
}