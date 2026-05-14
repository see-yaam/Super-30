#include <iostream>
using namespace std;

int main(){

    int password;
    int attempts = 3;
    int presentDays;
    int taskSubmitted;
    int attendanceMarks;
    int attendanceBonusOrPenalty;
    int taskBonusOrPenalty;
    int finalMarks;

    bool accessGranted = false;

    while(attempts > 0){

    cout << "Enter Password: " << endl;
    cin >> password;

    if(password >= 3001 && password <= 3030){

    cout << "Access Granted" << endl;
    cout << " " << endl;
    accessGranted = true;
    break;
    }
    else{

    attempts--;

   cout << "Wrong Password" << endl;

    if(attempts > 0){
    cout << attempts << " Attempts Left" << endl;
    cout << " " << endl;
    }
    else{
    cout << "System Blocked" << endl;
    }
  }
}

    if(accessGranted == true){

    cout << "Enter Total Present Days: " << endl;
    cin >> presentDays;
    cout << " " << endl;

    attendanceMarks = presentDays;


    if(presentDays == 5){

    attendanceBonusOrPenalty = 5;
    }
    else{

    attendanceBonusOrPenalty = -3;
    }



    cout << "All Tasks Submitted?" << endl;
    cout << "1 = Yes" << endl;
    cout << "0 = No" << endl;
    cout << " " << endl;
    cin >> taskSubmitted;



    if(taskSubmitted ==1){

    taskBonusOrPenalty = 10;
    }
    else{

    taskBonusOrPenalty = -10;
    }


    finalMarks = attendanceMarks + attendanceBonusOrPenalty + taskBonusOrPenalty;


    cout << "Attendance Marks = "<< attendanceMarks << endl;

    if(presentDays == 5){

    cout << "Perfect Attendance Bonus = "<< attendanceBonusOrPenalty << endl;
    }
    else{

    cout << "Attendance Penalty = "<< attendanceBonusOrPenalty << endl;
    }




    if(taskSubmitted == 1){

    cout << "Task Bonus = "<< taskBonusOrPenalty << endl;
    }
    else{

    cout << "Task Penalty = "<< taskBonusOrPenalty << endl;
    }




    cout << "Final Marks = "<< finalMarks << endl;
    }



    return 0;
}
