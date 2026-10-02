#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter student marks: ";
    cin >> marks;

    if (marks >= 40) {
        cout << "Passed" << endl;
    } else {
        cout << "Failed" << endl;
    }

    return 0;
}