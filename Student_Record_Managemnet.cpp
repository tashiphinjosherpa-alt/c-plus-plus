#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void input() {
        cout << "Enter Roll: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {
        cout << "\nRoll = " << roll;
        cout << "\nName = " << name;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}