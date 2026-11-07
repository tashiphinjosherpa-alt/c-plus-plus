#include <iostream>
using namespace std;

class Bank {
private:
    float balance;

public:
    Bank() {
        balance = 0;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void showBalance() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    Bank b;

    b.deposit(5000);
    b.showBalance();

    b.withdraw(2000);
    b.showBalance();

    return 0;
}