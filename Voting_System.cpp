#include <iostream>
using namespace std;

int main() {
    int vote;
    int ram = 0, shyam = 0;

    cout << "1. Ram\n";
    cout << "2. Shyam\n";

    for(int i = 1; i <= 5; i++) {
        cout << "Vote: ";
        cin >> vote;

        if(vote == 1)
            ram++;
        else if(vote == 2)
            shyam++;
    }

    cout << "\nRam Votes = " << ram;
    cout << "\nShyam Votes = " << shyam;

    return 0;
}