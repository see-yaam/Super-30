#include <iostream>  
using namespace std;

int main() {       
  int num;
  cout<<"enter number:";
  cin>>num;
  int digit=0;
  for(int i=0;num>0;i++)
  {
      num=num/10;
      digit++;
  }
  cout<<"number of digit:"<<digit;
    return 0;        
}