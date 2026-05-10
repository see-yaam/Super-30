#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


int main() {
   //find factorial of a number

   int n;
   cout<<"Type your number:"<<endl;
   cin>>n;
   int factorial=1;

   if(n>0){
   for(int i=2;i<=n;i++){
    factorial*=i;
   }
   }else{
     factorial=0;
   }
   cout<<"Factorial:"<<factorial;
    return 0;
}