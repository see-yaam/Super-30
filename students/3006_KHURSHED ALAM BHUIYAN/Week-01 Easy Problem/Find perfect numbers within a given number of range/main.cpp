#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <math.h>
using namespace std;


int main() {
   //Find perfect numbers within a range
   int u,v;
   cout<<"Range1:"<<endl;
   cin>>u;
   cout<<"Range2:"<<endl;
   cin>>v;


   cout<<endl;

   for(int i=u;i<=v;i++){
    int sum=0;
    for(int j=1;j<i;j++){
        if(i%j==0){
          sum+=j;
        }
    }
    if(sum==i){
        cout<<i<<endl;
    }
   }


    return 0;
}
