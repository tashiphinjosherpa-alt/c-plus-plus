#include <iostream>
using namespace std;

class ATM {
private:
    double balance = 1000;

public:
    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }
};

int main() {
    ATM a;

    a.checkBalance();
    a.deposit(500);
    a.checkBalance();
    a.withdraw(300);
    a.checkBalance();

    return 0;
}