#include <iostream>
#include <vector>
using namespace std;

class Expense {
public:
    string item;
    float amount;
};

int main() {
    vector<Expense> expenses;

    Expense e1;
    e1.item = "Food";
    e1.amount = 500;

    expenses.push_back(e1);

    float total = 0;

    for(int i = 0; i < expenses.size(); i++) {
        cout << expenses[i].item
             << " : "
             << expenses[i].amount
             << endl;

        total += expenses[i].amount;
    }

    cout << "Total Expense = " << total;

    return 0;
}