#include <iostream>
using namespace std;

int main() {
    long long n;
    int count = 0;

    cout << "Enter an integer: ";
    cin >> n;

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}