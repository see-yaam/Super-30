#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    if(num < 0) {
        cout << " negative number is not possible.";
    }
    else {

        for(int i = 1; i <= num; i++) {
            factorial = factorial * i;
        }

        cout << "Factorial = " << factorial;
    }

    return 0;
}
