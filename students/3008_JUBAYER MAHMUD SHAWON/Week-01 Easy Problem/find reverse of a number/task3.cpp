#include <iostream>  
using namespace std;

int main() {       
  int num,rev=0,count,lastdigit;
  cout<<"enter number:";
  cin>>num;

  for(int i=0;num>0;i++)
  {
     lastdigit=num%10;
     rev=rev*10;
     rev=rev+lastdigit;
 
      num=num/10;
 
      
  }
 cout<<"reverse number:"<<rev;

    return 0;        
}
