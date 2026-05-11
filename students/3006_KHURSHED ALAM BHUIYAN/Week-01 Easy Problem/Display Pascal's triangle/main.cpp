#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <math.h>
using namespace std;


int main() {
   //draw pastal diagram
   int n;
    cout<<"Rows:"<<endl;
    cin>>n;

    cout<<endl;
      for(int i=0;i<n;i++){
       int c=1;
       for(int space=1;space<=n-i;space++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<c<<"  ";
            c=c*(i-j)/(j+1);
        }
    cout<<endl;
    }

    return 0;
}
