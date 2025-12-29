#include <iostream> 
using namespace std;

int main() {
    int var = 100;
    int* ptr = &var ;

    cout << "The value of var is: " << *ptr << endl;
    cout << "Memory address of var is: " << &var << endl;
    cout << "Value of ptr: " << ptr << endl;

    *ptr = 200;

    cout << "New value of var is: " << var << endl;


}