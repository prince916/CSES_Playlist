#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};


int main() {
    Student s[5];   // Array of structures

    // Input
    for (int i = 0; i < 5; i++) {
        cout << "Enter details of student " << i + 1 << ":\n";

        cout << "Roll: ";
        cin >> s[i].roll;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Output
    cout << "\n--- Student Details ---\n";

    for (int i = 0; i < 5; i++) {
        cout << "Roll: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
        cout << "-------------------\n";
    }

    return 0;
}