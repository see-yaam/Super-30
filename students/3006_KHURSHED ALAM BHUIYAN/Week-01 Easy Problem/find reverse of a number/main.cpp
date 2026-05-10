#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


int main() {
   //find reverse of a number

   int n;
   cout<<"Type your number:"<<endl;
   cin>>n;
   int reverse=0;

   while(n>0){
    reverse=(reverse*10)+n%10;
    n/=10;
   }

   cout<<"Reverse:"<<reverse;
    return 0;
}