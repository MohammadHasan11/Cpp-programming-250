#include <iostream>
using namespace std;

int main() {
    float s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    float total = s1 + s2 + s3 + s4 + s5;
    cout << (total / 500) * 100;
    return 0;
}