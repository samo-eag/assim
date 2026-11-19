#include <iostream>
using namespace std;

int main() {
    int x;
cin >> x;
    int sum = 0;

    for (i= 0; i < 5; i++) {
        if (x % 2 != 0) {
            sum += x;
        }
    }

    cout << sum;

    return 0;
}