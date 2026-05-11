#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,n,cal,sum;
    cout << "Enter the Value of X: ";
    cin >> x;
    cout << "Enter the term n :";
    cin >> n;
    
    sum = x;
    int sign =-1;
    cout << "The value of seies X: "<<'\n'<< x << '\n';

    for(int i = 1; i< n; i++){
        cal = (2* i +1);
        int tvalue= pow(x,cal);
        int tsign= tvalue*sign;
        cout << tsign<< '\n';
        sum = sum+ tsign;
        sign= sign *(-1);
    }

    cout << '\n'<< "The Sum of seris: "<< sum;
    return 0;
}