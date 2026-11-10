#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string title;
};

int main() {
    Book b[2];

    for(int i=0;i<2;i++) {
        cout<<"Enter Book ID: ";
        cin>>b[i].id;

        cout<<"Enter Title: ";
        cin>>b[i].title;
    }

    cout<<"\nBooks:\n";

    for(int i=0;i<2;i++) {
        cout<<b[i].id<<" "
            <<b[i].title<<endl;
    }

    return 0;
}