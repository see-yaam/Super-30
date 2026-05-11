#include <iostream>
using namespace std;

int main(){

    int n;
    float sum = 0.0;
    cout<< "Enter the number of terms : ";
    cin >> n;

    for (int i =1; i <=n ;i++){
        cout<< "1/"<<i ;
        
         if (i != n) {
            cout << " + ";
        }
        sum= sum +(float) 1/i;

    }
    cout << '\n'<<"Sum Of seris Upto "<<n<<" terms: "<<sum;




    return 0; 
}