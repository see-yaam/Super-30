#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


int main() {
   //harmonic series and their sum

   int n;
   cout<<"Harmonic series upto?:"<<endl;
   cin>>n;
   double sum=0.0;

  for(int i=1;i<=n;i++){
    if(i!=n){
    cout<<"1/"<<i<<" + ";
    sum+=1.00/i;
    }else{
      cout<<"1/"<<i<<" = ";
    sum+=1.00/i;
    }
  }


   cout<<sum;
    return 0;
}
