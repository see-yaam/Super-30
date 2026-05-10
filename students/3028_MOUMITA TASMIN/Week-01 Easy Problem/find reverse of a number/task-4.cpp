#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    for(; temp != 0; temp = temp / 10) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
    }

    cout << "Reverse number = " << reverse;

    return 0;
}
