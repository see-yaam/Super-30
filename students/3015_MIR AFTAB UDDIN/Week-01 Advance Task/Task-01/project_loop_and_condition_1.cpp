#include <iostream>
using namespace std;

int main(){
    int pass, total_atm=3, ream_atm;

    int total_prsnt,total_cls=5;
    int attendence_marks;
    int extra_marks = 5;
    int penalty = -3; 

    int task_subm;
    int marks, bonus = 10, bonus_penalty=-10;



    for(int i =1; i <= total_atm ; i++){
        cout << "Enter the Password : ";
        cin >> pass;

        if ( pass == 3030 ){
            cout << "Access Granted " << '\n';
            break;
        }
        else {
            ream_atm= (total_atm-i);
            if (total_atm-i == 0 ){
                cout << "System Blocked ";
                return 0;
            }else
            cout << "Remaining Attemps : "<< ream_atm  <<" left "<<'\n';
        }
    }
    cout << endl;

    cout <<"Enter the present days : ";
    cin >> total_prsnt;

  if (total_prsnt == total_cls ){

    cout << "Attendence marks = "<< total_prsnt << '\n';
    cout << "Perfect Attendance Bonus = "<< extra_marks <<'\n' ;
    attendence_marks = total_prsnt + extra_marks ;

  }else {
    cout << " Attendence marks = "<< total_prsnt << '\n';
    cout << "Attendance Penalty = "<< penalty <<'\n' ; 
    attendence_marks = total_prsnt + penalty;
  }
  cout << endl;
  cout << "All Task Submitted : "<< '\n' << " 1 = Yes "<<'\n'<<" 0 = NO"<<'\n';
  cin >> task_subm;


  if (task_subm == 1){
    cout << "Task Bonus = "<<bonus<<'\n';
    marks = attendence_marks + bonus ; 
  }else{
  cout << "Task penalty = "<< bonus_penalty<<'\n';
   marks = attendence_marks + bonus_penalty;
  }
  cout<< endl;
  

   int final_Marks = marks;

   cout << "Final Marks = "<< final_Marks;






return 0;


}