#include <iostream>
#include <vector>
using namespace std;

class Employee {
public:
    int id;
    string name;
};

int main() {

    vector<Employee> emp;

    Employee e;

    cout << "Enter ID: ";
    cin >> e.id;

    cout << "Enter Name: ";
    cin >> e.name;

    emp.push_back(e);

    cout << "\nEmployee List\n";

    for(int i=0;i<emp.size();i++) {
        cout << emp[i].id
             << " "
             << emp[i].name
             << endl;
    }

    return 0;
}