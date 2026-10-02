#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << "Sum of odd numbers: " << sum << endl;
    return 0;
}