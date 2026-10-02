#include <iostream>
using namespace std;

int main() {
    int n, posCount = 0, negCount = 0, zeroCount = 0;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }

    cout << "Positive elements count: " << posCount << endl;
    cout << "Negative elements count: " << negCount << endl;
    cout << "Zero elements count: " << zeroCount << endl;

    return 0;
}