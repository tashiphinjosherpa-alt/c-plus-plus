#include <iostream>
using namespace std;

class Movie {
public:
    int seats = 50;

    void bookTicket(int n) {
        if(n <= seats) {
            seats -= n;
            cout << "Booking Successful\n";
        }
        else {
            cout << "Not Enough Seats\n";
        }
    }
};

int main() {
    Movie m;

    m.bookTicket(5);

    cout << "Remaining Seats = "
         << m.seats;

    return 0;
}