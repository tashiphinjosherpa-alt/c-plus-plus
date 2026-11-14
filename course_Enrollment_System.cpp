#include <iostream>
#include <vector>
using namespace std;

class Course {
public:
    string name;
};

int main() {

    vector<Course> courses;

    Course c1;
    c1.name = "C++";

    Course c2;
    c2.name = "Python";

    courses.push_back(c1);
    courses.push_back(c2);

    cout << "Enrolled Courses\n";

    for(int i = 0; i < courses.size(); i++) {
        cout << courses[i].name << endl;
    }

    return 0;
}