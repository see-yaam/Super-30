#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter an integer: ";
    cin >> num;


    num = abs(num);


    if (num == 0) {
        count = 1;
    }

    while (num > 0) {
        num = num / 10;
        count++;
    }

    cout << "Number of digits = " << count << endl;

    return 0;
}
