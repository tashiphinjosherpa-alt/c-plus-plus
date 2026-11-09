#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    float salary;

    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
    }
};

int main() {
    Employee e;

    e.input();
    e.display();

    return 0;
}