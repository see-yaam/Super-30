#include <iostream>
using namespace std;

int main() {
    int n, count1= 0;

    cin >> n;

    while(n != 0) {
        int digit = n % 10;
       count1++;
        n = n / 10;
    }

    cout << count1;

    return 0;
}
