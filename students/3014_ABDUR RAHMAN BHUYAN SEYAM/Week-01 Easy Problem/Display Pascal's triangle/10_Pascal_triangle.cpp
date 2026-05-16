#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int space = n - 1;
    for(int i = 1; i <= n; i++){
      
        for(int k = 1; k <= space; k++){
            cout <<" ";
        }

        int num = 1;
        for(int j = 1; j <= i; j++){
            cout<<num<<" "; 

            num = num * (i - j) / j;  //! formula for pascals triangle
        }
        cout << endl;
        space--;
    }

    return 0;
}

//    1
//   1 1
//  1 2 1 
// 1 3 3 1

// space :
// 3 = n-1
// 2 = n-2
// 1 = n-3
// 0 = n-4