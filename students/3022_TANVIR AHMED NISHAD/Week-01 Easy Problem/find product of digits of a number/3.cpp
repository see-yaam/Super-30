#include <iostream>
using namespace std;

int main() {
    int num, digit, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    num = abs(num);


    if (num == 0) {
        product = 0;
    }

    while (num > 0) {
        digit = num % 10;
        product *= digit;
        num = num / 10;
    }

    cout << "Product of digits = " << product << endl;

    return 0;
}
