#include <iostream>
using namespace std;

int main() {
    float math, physics, chemistry;
    cout << "Enter marks for Math, Physics, and Chemistry: ";
    cin >> math >> physics >> chemistry;

    float total = math + physics + chemistry;
    float math_phy = math + physics;

    if ((math >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || (math_phy >= 140)) {
        cout << "The candidate is eligible for admission." << endl;
    } else {
        cout << "The candidate is not eligible for admission." << endl;
    }

    return 0;
}