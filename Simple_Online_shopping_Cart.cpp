#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    string name;
};

int main() {
    vector<Item> cart;

    Item i1;
    i1.name = "Laptop";

    Item i2;
    i2.name = "Mouse";

    cart.push_back(i1);
    cart.push_back(i2);

    cout << "Shopping Cart\n";

    for(int i = 0; i < cart.size(); i++) {
        cout << cart[i].name << endl;
    }

    return 0;
}