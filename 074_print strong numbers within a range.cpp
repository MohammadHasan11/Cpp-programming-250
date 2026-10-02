#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range (start and end): ";
    cin >> start >> end;

    cout << "Strong numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        int temp = i, sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            int fact = 1;
            for (int k = 1; k <= digit; k++) {
                fact *= k;
            }
            sum += fact;
            temp /= 10;
        }
        if (sum == i && i > 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}