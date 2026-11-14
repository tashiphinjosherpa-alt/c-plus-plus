#include <iostream>
using namespace std;

int main() {

    string username;
    string password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if(username == "admin" &&
       password == "1234")
    {
        cout << "Login Successful";
    }
    else
    {
        cout << "Login Failed";
    }

    return 0;
}