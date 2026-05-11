#include <iostream>
using namespace std;

int main() {
    int n, p = 1;
    cin >> n;
    while (n != 0) {
        p *= n % 10;
        n /= 10;
    }
    cout << "Product of digits: " << p << endl;
    return 0;
}