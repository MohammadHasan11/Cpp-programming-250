#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;
    cout << "Enter an integer: ";
    cin >> n;

    original = n;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed) {
        cout << original << " is a Palindrome." << endl;
    } else {
        cout << original << " is not a Palindrome." << endl;
    }

    return 0;
}