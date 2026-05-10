#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


int main() {
   //count number of digits

   int n;
   int count=0;
   cout<<"Type your number:"<<endl;
   cin>>n;

   while(n>0){
    n/=10;
    count++;
   }

   cout<<"Count:"<<count;
    return 0;
}