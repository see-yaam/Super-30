#include <iostream>
using namespace std;

int main() {
    int pass;
    int chance = 3;
    int present;
    int task;
    int marks = 0;


    while (chance > 0) {
        cout << "Enter your password: ";
        cin >> pass;

        if (pass == 696969) {
            cout << "Congrats!Your access has granted" << endl;
            break;
        }
        else {
            chance--;
            if (chance > 0) {
                cout << "Password Incorrect! Attempts Left: " << chance << endl;
            }
            else {
                cout << "Error 404!!!" << endl;
                return 0;
            }
        }
    }


    cout << "Enter Total Present Days: ";
    cin >> present;

    marks = present;

    if (present == 5) {
        marks = marks + 5;
    }
    else {
        marks = marks - 3;
    }


    cout << "All Tasks Submitted?" << endl;
    cout << "1 = Yes" << endl;
    cout << "0 = No" << endl;
    cin >> task;

    if (task == 1) {
        marks = marks + 10;
    }
    else {
        marks = marks - 10;
    }

    cout << "Final Marks = " << marks << endl;

    return 0;
}
