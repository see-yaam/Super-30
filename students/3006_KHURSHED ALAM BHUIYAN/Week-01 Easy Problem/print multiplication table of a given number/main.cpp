#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;


int main() {
   //print multiplication table of u until v

   int u,v;
   cout<<"Type your number:"<<endl;
   cin>>u;
   cout<<"Until?"<<endl;
   cin>>v;

   for(int i=1;i<=v;i++){
    cout<<u<<" X"<<i<<" ="<<u*i<<endl;
   }

    return 0;
}
