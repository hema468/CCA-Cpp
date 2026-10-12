#include <iostream>
using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() {
    Student s = {101, 85.5};

    cout << "Roll number = " << s.roll << endl;
    cout << "Marks = " << s.marks;

    return 0;
}