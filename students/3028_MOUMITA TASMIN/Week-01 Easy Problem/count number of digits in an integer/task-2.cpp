
#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter an integer: ";
    cin >> num;
    if (num < 0)
    {
        num = -num;
    }

    if (num == 0)
    {
        count= 1;
    }

    while (num!= 0)
    {
        num = num/10;
        count++;
    }

    cout << "total digits = " << count;

    return 0;
}
