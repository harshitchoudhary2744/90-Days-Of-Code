// Create a program that mimics a phone's lock screen.

#include <iostream>
using namespace std;

int main()
{
    int secret_pin = 2025;
    int guess_pin;
    int guess_limit = 3;
    bool is_locked = true; 

    cout << "--- PHONE LOCK SCREEN ---" << endl;

    
    for (int i = 0; i < guess_limit; i++)
    {
        cout << "Enter PIN: ";
        cin >> guess_pin;

        if (guess_pin == secret_pin)
        {
            cout << "Phone Unlocked!" << endl;
            is_locked = false; 
            break;             
        }
        else
        {
            cout << "Wrong PIN. Remaining tries: " << (guess_limit - 1 - i) << endl;
        }
    }

    
    if (is_locked)
    {
        cout << "ALARM: PHONE LOCKED FOR 30 SECONDS!" << endl;
    }

    return 0;
}