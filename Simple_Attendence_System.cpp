#include <iostream>
using namespace std;

int main() {
    string students[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter student name: ";
        cin >> students[i];
    }

    cout << "\nAttendance List\n";

    for(int i = 0; i < 3; i++) {
        cout << students[i] << " - Present" << endl;
    }

    return 0;
}