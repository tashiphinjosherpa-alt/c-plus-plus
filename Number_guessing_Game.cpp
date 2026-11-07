#include <iostream>
using namespace std;

int main() {
    int secret = 25;
    int guess;

    do {
        cout << "Guess Number: ";
        cin >> guess;

        if(guess > secret)
            cout << "Too High\n";
        else if(guess < secret)
            cout << "Too Low\n";

    } while(guess != secret);

    cout << "Correct Number!";

    return 0;
}