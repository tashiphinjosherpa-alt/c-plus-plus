#include <iostream>
using namespace std;

int main() {

    int score = 0;
    int ans;

    cout << "What is 5 + 5?\n";
    cout << "1. 8\n2. 10\n3. 12\n";
    cin >> ans;

    if(ans == 2)
        score++;

    cout << "Score = " << score;

    return 0;
}