#include <iostream>
using namespace std;

int main() {
    int num;
    int fact = 1;

    cout << "Enter number: ";
    cin >> num;

    int i = 1;
    while (i <= num) {
        fact = fact * i;
        i++;
    }

    cout << fact;

    return 0;
}