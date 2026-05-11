#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <math.h>
using namespace std;


int main() {
   //Sum of [x - x^3 + x^5 + ......] (Sign alternate and power)

   int x,sum=0,n;
   cout<<"Enter x:"<<endl;
   cin>>x;
   cout<<"Upto?:"<<endl;
   cin>>n;

   cout<<endl;


   bool flag=false;
   int exp=1;

   for(int i=1;i<=n;i++){
    if(flag==false){
    sum=sum+pow(x,exp);
    cout<<sum<<endl;
    flag=true;
    exp+=2;
    }else{
    sum=sum-pow(x,exp);
    cout<<sum<<endl;
    flag=false;
    exp+=2;
    }

   }
   cout<<endl;
   cout<<"Sum:"<<sum;


    return 0;
}
