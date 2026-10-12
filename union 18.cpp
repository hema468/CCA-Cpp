#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
    char letter;
};

int main() {
    cout << "Size of union = " << sizeof(Data);
    return 0;
}