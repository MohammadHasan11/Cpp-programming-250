#include <iostream>
using namespace std;

int main() {
    int n, key, pos = -1;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i + 1;
            break;
        }
    }

    if (pos != -1) {
        cout << "First occurrence of " << key << " is at position " << pos << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}