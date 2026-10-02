#include <iostream>
using namespace std;

int main() {
    int sec, h, m, s;
    cin >> sec;
    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;
    cout << h << "h " << m << "m " << s << "s";
    return 0;
}