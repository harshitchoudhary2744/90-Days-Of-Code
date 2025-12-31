#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float cgpa;

    void introduce() {
        cout << "--- Student ID Card ---" << endl;
        cout << "Name:      " << name << endl;
        cout << "Roll No:   " << rollNumber << endl;
        cout << "CGPA:      " << cgpa << endl;
    }

    void checkStatus() {
        if (cgpa >= 9.0) {
            cout << "Status:    HONOR STUDENT (Dean's List) 🌟" << endl;
        } else {
            cout << "Status:    Regular Student" << endl;
        }
        cout << "-----------------------" << endl;
    }
};

int main() {
    Student s1;
    s1.name = "xyz";
    s1.rollNumber = 0001;
    s1.cgpa = 8.5; 

    Student s2;
    s2.name = "abc";
    s2.rollNumber = 0002;
    s2.cgpa = 9.2;

    
    s1.introduce();
    s1.checkStatus();

    cout << endl; 

    s2.introduce();
    s2.checkStatus();

    return 0;
}