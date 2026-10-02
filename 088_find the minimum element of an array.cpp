#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    cout << "Minimum element: " << min_val << endl;
    return 0;
}