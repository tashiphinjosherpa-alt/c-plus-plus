#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tasks;
    string task;
    int choice;

    do {
        cout << "\n1. Add Task";
        cout << "\n2. Show Tasks";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Task: ";
                cin >> task;
                tasks.push_back(task);
                break;

            case 2:
                cout << "\nTasks:\n";

                for(int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". "
                         << tasks[i] << endl;
                }
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 3);

    return 0;
}