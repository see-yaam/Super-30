#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


int main() {
   //multiply digits in an integer

   int n;
   int product=1;
   cout<<"Type your number:"<<endl;
   cin>>n;

   while(n>0){
    product*=(n%10);
    n/=10;
   }

   cout<<"Product:"<<product;
    return 0;
}