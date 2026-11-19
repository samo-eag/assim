#include <iostream>
using namespace std;

int main() {
    int mark;
    cin >> mark;

    if (mark < 25) {
        cout << "F";
    } else if (mark <= 45) {
        cout << "E";
    } else if (mark <= 50) {
        cout << "D";
    } else if (mark <= 60) {
        cout << "C";
    } else if (mark <= 80) {
        cout << "B";
    } else {
        cout << "A";
    }

    return 0;
}