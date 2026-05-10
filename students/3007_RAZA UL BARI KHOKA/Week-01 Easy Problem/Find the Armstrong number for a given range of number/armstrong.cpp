#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n, temp, count1 = 0;
    cin >> n;

    temp = n;
    while(temp > 0) {
        count1++;
        temp =temp/ 10;
    }

    temp = n;
    int sum = 0;
    while(temp > 0) {
        int digit = temp % 10;
        sum =sum+ pow(digit, count1);
        temp =temp/ 10;
    }

    if(sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
