#include <iostream>
using namespace std;

int main() {
    int year=2025;
    int birthyear;
    cin >> birthyear;

    if (year - birthyear >= 18) {
        cout << "18 or older";
    } else {
        cout << "younger than 18";
    }

    return 0;
}