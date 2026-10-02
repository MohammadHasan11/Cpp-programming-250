#include <iostream>
using namespace std;

int main() {
    int n, evenCount = 0, oddCount = 0;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Even elements count: " << evenCount << endl;
    cout << "Odd elements count: " << oddCount << endl;

    return 0;
}