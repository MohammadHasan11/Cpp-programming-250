#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int max_num = a;
    if (b > max_num) max_num = b;
    if (c > max_num) max_num = c;
    if (d > max_num) max_num = d;

    cout << "Largest number is: " << max_num << endl;

    return 0;
}