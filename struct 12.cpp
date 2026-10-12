#include <iostream>
using namespace std;

struct Numbers {
    int a;
    int b;
};

int main() {
    Numbers n = {10, 20};

    cout << "Sum = " << n.a + n.b;
    return 0;
}