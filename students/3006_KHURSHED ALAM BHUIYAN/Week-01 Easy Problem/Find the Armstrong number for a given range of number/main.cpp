#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <math.h>
using namespace std;

int countDigit(int x){
  int count=0;
  while(x>0){
    x/=10;
    count++;
  }
  return count;
}

int main() {
   //Find armstrong number within given range (need mod,/,size) - [Ex: 153=1'3 + 5'3 + 3'3]
   int u,v;
   cout<<"Range1:"<<endl;
   cin>>u;
   cout<<"Range2:"<<endl;
   cin>>v;

   cout<<endl;

   for(int i=u;i<=v;i++){
    int sum=0;
    int temp=i;
    int count=countDigit(i);
    while(temp>0){
      sum=sum+(pow((temp%10),count));
      temp/=10;
    }
    if(sum==i){
        cout<<i<<endl;
    }
   }

    return 0;
}
