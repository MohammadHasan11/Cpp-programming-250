#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range (start and end): ";
    cin >> start >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        int digits = 0, sum = 0, temp = i;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        while (temp > 0) {
            int remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == i) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}