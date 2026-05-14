#include<iostream>
using namespace std;
int main ()
{
    int password;
    int correctpassword =3030;
    int attempts=3;
    while(attempts > 0)
    {
        cout << "Enter password: ";
        cin >> password;
        if(password == correctpassword)
        {
            cout << "Access Granted" << endl;
            break;
        }
        else
        {
            attempts--;
            if(attempts > 0)
            {
                cout << "wrong password" << endl;
                cout << attempts << "Attempts Left" << endl;
            }
        }
    }
    if(password == correctpassword)
    {
        int presentdays;
        int tasks;
        int attendancemarks;
        int finalmarks;

        cout << "Enter total present days: ";
        cin >> presentdays;

        cout << "All Tasks Submitted?" << endl;
        cout << "1=yes" << endl;
        cout << "0=No" << endl;
        cin >> tasks;
        attendancemarks = presentdays;
        finalmarks = attendancemarks;
        cout << "Attendance Marks = " << attendancemarks << endl;
        if (presentdays == 5)
        {
            cout << "perfect Attendance bonus = 5" << endl;
            finalmarks = finalmarks +5;
        }
        else
        {
            cout << "Attendance penalty = -3 " << endl;
            finalmarks = finalmarks - 3;
        }
        if (tasks == 1)
        {
            cout << "Task Bonus = 10" << endl;
            finalmarks = finalmarks + 10;
        }
        else
        {
            cout << "Task penalty = -10 " << endl;
            finalmarks = finalmarks - 10;
        }
        cout << "Final Marks = " << finalmarks << endl;

    }

    return 0;
}
