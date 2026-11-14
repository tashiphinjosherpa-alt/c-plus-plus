#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks[3];

    void input() {
        cout << "Enter Name: ";
        cin >> name;

        for(int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void result() {
        int total = 0;

        for(int i = 0; i < 3; i++) {
            total += marks[i];
        }

        cout << "Total = " << total << endl;
        cout << "Percentage = "
             << total / 3.0 << "%";
    }
};

int main() {
    Student s;

    s.input();
    s.result();

    return 0;
}