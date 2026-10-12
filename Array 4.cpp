#include <iostream>
using namespace std;

int main() {
    int a[5] = {12, 45, 7, 89, 23};
    int largest = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    cout << "Largest = " << largest;
    return 0;
}