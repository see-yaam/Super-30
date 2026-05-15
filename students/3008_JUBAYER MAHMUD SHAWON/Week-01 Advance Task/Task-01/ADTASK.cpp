
#include <iostream>
using namespace std;

int main()
{
    int pass,n=3,days,task,abon=5,apen=-3,taskmark,marks;
  cout<<"Input:"<<endl;
    for(int i=1; i<=3; i++)
    {
      
        cout<<"Enter Password: ";
        cin>>pass;

        n--;

        if(pass==3030)
        {
            cout<<"Enter Total Present Days:"<<endl;
            cin>>days;

            cout<<"All Tasks Submitted?"<<endl;
            cout<<"1 = Yes 0 = No"<<endl;
            cin>>task;

            
            if(days==5 && task==1)
            {
                taskmark=10;

                cout<<"Access Granted"<<endl;
                cout<<"Attendance Marks = "<<days<<endl;
                cout<<"Perfect Attendance Bonus = "<<abon<<endl;
                cout<<"Task Bonus = "<<taskmark<<endl;

                marks=days+abon+taskmark;
                cout<<"Final Marks = "<<marks;
            }

            
            else if(days==5 && task==0)
            {
                taskmark=-10;

                cout<<"Access Granted"<<endl;
                cout<<"Attendance Marks = "<<days<<endl;
                cout<<"Perfect Attendance Bonus = "<<abon<<endl;
                cout<<"Task Penalty = "<<taskmark<<endl;

                marks=days+abon+taskmark;
                cout<<"Final Marks = "<<marks;
            }

            
            else if(days<5 && task==1)
            {
                taskmark=10;

                cout<<"Access Granted"<<endl;
                cout<<"Attendance Marks = "<<days<<endl;
                cout<<"Attendance Penalty = "<<apen<<endl;
                cout<<"Task Bonus = "<<taskmark<<endl;

                marks=days+apen+taskmark;
                cout<<"Final Marks = "<<marks;
            }

            
            else if(days<5 && task==0)
            {
                taskmark=-10;

                cout<<"Access granted"<<endl;
                cout<<"Attendance marks = "<<days<<endl;
                cout<<"Attendance Penalty = "<<apen<<endl;
                cout<<"Task penalty = "<<taskmark<<endl;

                marks=days+apen+taskmark;
                cout<<"Final Marks = "<<marks;
            }

            break;
        }

        else
        {
            if(n==0)
            {
                cout<<"System blocked";
            }
            else
            {
                cout<<"wrong password"<<endl;
                cout<<""<<n<<" attempts left"<<endl;
            }
        }
    }
}