#include <iostream>
using namespace std;

class Room {
public:
    int roomNo;
    bool booked;

    Room(int no) {
        roomNo = no;
        booked = false;
    }
};

int main() {
    Room r1(101);

    if (!r1.booked) {
        r1.booked = true;
        cout << "Room " << r1.roomNo << " Booked";
    }

    return 0;
}