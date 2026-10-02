#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter position to delete (1 to " << n << "): ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        cout << "Array after deletion: ";
        for (int i = 0; i < n - 1; i++) cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}