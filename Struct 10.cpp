#include <iostream>
using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() {
    Student s;

    cout << "Enter roll number and marks: ";
    cin >> s.roll >> s.marks;

    cout << "Roll number = " << s.roll << endl;
    cout << "Marks = " << s.marks;

    return 0;
}