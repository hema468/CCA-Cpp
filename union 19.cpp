#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
    char letter;
};

int main() {
    Data d;

    d.number = 10;
    cout << "Integer = " << d.number << endl;

    d.decimal = 5.5;
    cout << "Float = " << d.decimal << endl;

    d.letter = 'A';
    cout << "Character = " << d.letter;

    return 0;
}