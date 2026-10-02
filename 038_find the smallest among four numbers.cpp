#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int min_num = a;
    if (b < min_num) min_num = b;
    if (c < min_num) min_num = c;
    if (d < min_num) min_num = d;

    cout << "Smallest number is: " << min_num << endl;

    return 0;
}