#include<iostream>
using namespace std;

int main()
{
    int password;
    int attempts = 3;
    while(attempts > 0)
    {
        cout << "Enter Password: ";
        cin >> password;

        if(password == 3030)
        {
            cout << "Access Granted" << endl;
            break;
        }
        else
        {
            attempts--;

            if(attempts > 0)
            {
                cout << "Wrong Password" << endl;
                cout << attempts << " Attempts Left" << endl;
            }
            else
            {
                cout << "System Blocked" << endl;
            }
        }
    }
    if(password ==3030)
    {
        int presentDays;
        int choice;
        cout << "Enter Total Present Days: ";
        cin >> presentDays;
        cout << "All Tasks Submitted?" << endl;
        cout << "1 = Yes" << endl;
        cout << "0 = No" << endl;
        cin >> choice;
int attendanceMarks = presentDays;
        int bonus_Penalty = 0;
        int taskBonus_Penalty = 0;
        if(presentDays == 5)
        {
            bonus_Penalty = 5;
            cout << "Attendance Marks = "
                 << attendanceMarks << endl;

            cout << "Perfect Attendance Bonus = 5" << endl;
        }
        else
        {
            bonus_Penalty = -3;

            cout << "Attendance Marks = "
                 << attendanceMarks << endl;

            cout << "Attendance Penalty = -3" << endl;
        }
        if(choice == 1)
        {
            taskBonus_Penalty = 10;
            cout << "Task Bonus = 10" << endl;
        }
        else
        {
            taskBonus_Penalty = -10;
            cout << "Task Penalty = -10" << endl;
        }

        int finalMarks =
            attendanceMarks +
            bonus_Penalty +
            taskBonus_Penalty;

        cout << "Final Marks = "
             << finalMarks << endl;
    }

    return 0;
}
