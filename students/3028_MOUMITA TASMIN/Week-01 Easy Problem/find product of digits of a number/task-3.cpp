#include <iostream>
using namespace std;

int main()
{
    int num,digit, product = 1;

    cout << "Enter an integer: ";
    cin >> num;
    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        product= 1;
    }

   while(num != 0) {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }

    cout << "Product of digits = " << product ;

    return 0;
}

