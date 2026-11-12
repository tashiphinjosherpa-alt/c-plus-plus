#include <iostream>
using namespace std;

class Product {
public:
    string name;
    int quantity;

    void input() {
        cout << "Product Name: ";
        cin >> name;

        cout << "Quantity: ";
        cin >> quantity;
    }

    void display() {
        cout << "\n" << name
             << " : "
             << quantity;
    }
};

int main() {
    Product p;

    p.input();
    p.display();

    return 0;
}