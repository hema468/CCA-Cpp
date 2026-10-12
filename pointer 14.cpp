#include <iostream>
using namespace std;

int main() {
    int a = 25;
    int *p = &a;

    cout << "Value = " << *p;
    return 0;
}