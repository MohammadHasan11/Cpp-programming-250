#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range (start and end): ";
    cin >> start >> end;

    cout << "Perfect numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i && i > 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}