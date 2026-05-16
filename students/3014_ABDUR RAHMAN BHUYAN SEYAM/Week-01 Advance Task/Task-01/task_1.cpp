#include <bits/stdc++.h>
using namespace std;

int main()
{

    int pass = 3030;
    int attemp = 3;
    int inputpass;
    int marks, tmark;
    int task;

    while (attemp != 0)
    {
      //  cout << "enter pass" << endl;
        cin >> inputpass;
        if (pass != inputpass)
        {
            attemp--;
            if (attemp > 0)
            {
                cout << attemp << " attemps remaining...try again" << endl;
            }
            else
            {
                cout << "System Blocked" << endl;
            }
        }

        else
        {
            cout << "access granted" << endl;
            break;
        }
    }

    int present;
  //  cout << "enter total present days";
    cin >> present;
    cout << "Attendance Marks= " << present<<endl;
    if (present == 5)
    {
        marks = present + 5;
        cout << "Perfect Attendance Bonus = 5"<<endl;
    }
    else if (present < 5)
    {
        marks = present - 3;
        cout << "Attendance Penalty = -3"<<endl;
    }

    cout << "All Task submitted?" << endl
         << "1 = Yes" << endl
         << "0 = No" << endl;
    cin >> task;
    if (task == 1)
    {
        tmark = 10;
        cout << "Task Bonus = 10"<<endl;
    }
    else if (task == 0)
    {
        tmark = -10;
        cout << "Task Penalty = -10"<<endl;
    }

    int final_marks = marks + tmark;
    cout << "Final Marks= " << final_marks;
}