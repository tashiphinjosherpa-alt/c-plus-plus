#include <iostream>
using namespace std;

int main() {
    float marks, avg;

    cout << "Enter marks: ";
    cin >> marks;

    avg = marks;

    if(avg >= 80)
        cout << "Grade A";
    else if(avg >= 60)
        cout << "Grade B";
    else if(avg >= 40)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}
