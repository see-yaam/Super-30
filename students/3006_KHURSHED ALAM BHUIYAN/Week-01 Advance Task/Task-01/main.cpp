#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <math.h>
using namespace std;

int checkPass(){
   bool flag=false;
   int passInput;
   int pass=3030;
   int counter=3;
   while(flag==false){
     if(counter!=0){
     cin>>passInput;
     if(passInput==pass){
        flag=true;
        cout<<"Password Matched. Access Granted!"<<endl;
        break;
     }
     counter--;
     cout<<"Wrong Password"<<endl;
     cout<<counter<<" attempts left!"<<endl;
     }else{
        cout<<"Access Denied"<<endl;
        return 0;
     }
   }
   return 1;
}

int main() {
    cout<<"Enter Password:"<<endl;
    int passResult = checkPass();

    if(passResult==1){
      int totalPresentDays;
      bool isAllTaskSubmitted=0;
      int finalMarks;
      cout<<"Enter Total Present Days:"<<endl;
      cin>>totalPresentDays;

      cout<<endl;

      cout<<"All Tasks Submitted?"<<endl;
      cout<<"1 = Yes"<<endl;
      cout<<"0 = No"<<endl;
      cin>>isAllTaskSubmitted;

      cout<<endl;

      int attendanceMarks=0;
      int bonusPoint=0;
      int penaltyPoint=0;


      if(totalPresentDays==5){
        attendanceMarks+=5;
        bonusPoint+=5;
      }
      if(totalPresentDays<5){
        attendanceMarks+=totalPresentDays;
        penaltyPoint+=3;
      }
      if(isAllTaskSubmitted==1){
        bonusPoint+=10;
      }else{
        penaltyPoint+=10;
      }

      finalMarks = (attendanceMarks+bonusPoint)-penaltyPoint;
      cout<<"Attendance Marks = "<<attendanceMarks<<endl;
      cout<<"Bonus Point = "<<bonusPoint<<endl;
      cout<<"Penalty Point = -"<<penaltyPoint<<endl;

      cout<<"Final Marks = "<<finalMarks<<endl;

    }


    return 0;
}
