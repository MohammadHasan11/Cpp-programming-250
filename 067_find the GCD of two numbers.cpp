#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int n1 = a, n2 = b;
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    cout << "GCD of " << a << " and " << b << " is: " << n1 << endl;
    return 0;
}