#include <iostream>
using namespace std;

int main() {
    int num, r, sum, temp;
    int start, end;

    cout << "Input starting number of range: ";
    cin >> start;

    cout << "Input ending number of range : ";
    cin >> end;

    cout << "Armstrong numbers in given range are: ";

    for(num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while(temp != 0) {
            r = temp % 10;
            temp = temp / 10;
            sum = sum + (r * r * r);
        }

        if(sum == num)
            cout << num << " ";
    }

    cout << endl;
    return 0;
}