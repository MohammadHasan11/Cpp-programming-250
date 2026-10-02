#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;
    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "Equilateral Triangle" << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "Isosceles Triangle" << endl;
    } else {
        cout << "Scalene Triangle" << endl;
    }

    return 0;
}