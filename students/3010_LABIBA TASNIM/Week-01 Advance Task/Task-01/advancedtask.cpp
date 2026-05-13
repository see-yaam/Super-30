#include<bits/stdc++.h>
using namespace std;

int main()
{
  int password,attempts=3,attendence,submission;

  while(attempts>0)
  {
    cout<<"Enter Password: ";
    cin>>password;

    if(password==3030)
    {
      cout<<"Access Granted"<<endl;

    cout<<"Enter total present days: ";
    cin>>attendence;

    int attendencemarks=attendence;
    int finalmarks=attendencemarks;

    cout<<"Attence Marks: "<<attendencemarks<<endl;

      if(attendence==5)
      {
        finalmarks+=5;
        cout<<"Perfect Attendence Marks=5"<<endl;
      }
      else
      {
          finalmarks-=3;
          cout<<"Attendence Penalty=-3"<<endl;
      }

      cout<<"All Tasks Submitted?"<<endl;
      cout<<"1=yes"<<endl;
      cout<<"0=No"<<endl;
      cin>>submission;

       if(submission==1)
       {
           finalmarks+=10;
           cout<<"Task bonus=10"<<endl;
       }
       else
       {
           finalmarks-=10;
           cout<<"Task penalty=-10"<<endl;
       }
       cout<<"Final Marks= "<<finalmarks<<endl;
        break;
    }
    else
    {
        attempts--;
         if(attempts>0)
         {
             cout<<"Wrong Password"<<endl;
             cout<<"Attempts Left:"<<attempts<<endl;
         }
         else
         {
             cout<<"System Blocked"<<endl;
         }
     }
   }
   return 0;
}

