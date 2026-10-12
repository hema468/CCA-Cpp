#include <iostream>
using namespace std;

enum Day {Monday, Tuesday, Wednesday, Thursday,
          Friday, Saturday, Sunday};

int main() {
    Day d = Wednesday;

    cout << "Day number = " << d + 1;
    return 0;
}