//Find the Highest Score in the array and print it separately.

#include <iostream>
using namespace std;

int main() {
    int marks[] = {85, 92, 78, 90, 88};
    int size = 5;
    int highest_score = 0;

    cout << "--- STUDENT GRADES ---" << endl;

    for(int i = 0; i < size; i++) {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;

        if(marks[i] > highest_score) {
            highest_score = marks[i];
        }
    }

    cout << "----------------------" << endl;
    cout << "Highest Score: " << highest_score << endl;

    return 0;
}