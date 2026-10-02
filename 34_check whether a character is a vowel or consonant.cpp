#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a Vowel." << endl;
        } else {
            cout << ch << " is a Consonant." << endl;
        }
    } else {
        cout << "Not an alphabet character." << endl;
    }

    return 0;
}