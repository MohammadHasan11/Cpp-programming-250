#include <iostream>
using namespace std;

int main() {
    int days, y, m, d;
    cin >> days;
    y = days / 365;
    m = (days % 365) / 30;
    d = (days % 365) % 30;
    cout << y << "y " << m << "m " << d << "d";
    return 0;
}