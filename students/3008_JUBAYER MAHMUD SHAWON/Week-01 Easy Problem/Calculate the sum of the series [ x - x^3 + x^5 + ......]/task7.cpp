#include <iostream>
using namespace std;

int main() {
    int x, n;
    int sum = 0;
    int term;
    int sign = 1;

    cout << "Input the value of x : ";
    cin >> x;
    cout << "Input number of terms : ";
    cin >> n;

    cout << "The values of the series:" << endl;

 
    term = x;

    for (int i = 1; i <= n; i++) {
        
        int current_val = term * sign;
        
        cout << current_val << endl;
        sum = sum + current_val;

        term = term * x * x;
  
        sign = sign * -1;
    }

    cout << endl << "The sum = " << sum << endl;

    return 0;
}