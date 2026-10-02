#include <iostream>
using namespace std;

int main() {
    int n, pos, elem;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n + 1];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to insert: ";
    cin >> elem;
    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> pos;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = elem;

    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}