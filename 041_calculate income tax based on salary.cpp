#include <iostream>
using namespace std;

int main() {
    double salary, tax = 0;
    cout << "Enter annual salary: ";
    cin >> salary;

    if (salary <= 300000) {
        tax = 0;
    } else if (salary <= 600000) {
        tax = (salary - 300000) * 0.05;
    } else if (salary <= 1000000) {
        tax = (300000 * 0.05) + (salary - 600000) * 0.10;
    } else {
        tax = (300000 * 0.05) + (400000 * 0.10) + (salary - 1000000) * 0.15;
    }

    cout << "Income Tax: " << tax << endl;
    return 0;
}