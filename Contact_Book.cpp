#include <iostream>
#include <vector>
using namespace std;

class Contact {
public:
    string name;
    string phone;
};

int main() {

    vector<Contact> contacts;

    Contact c1;
    c1.name = "Tashi";
    c1.phone = "980000000";

    contacts.push_back(c1);

    for(int i=0;i<contacts.size();i++) {
        cout << contacts[i].name
             << " - "
             << contacts[i].phone
             << endl;
    }

    return 0;
}