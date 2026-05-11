#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0.0;

    cout << "Input the number of terms : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i < n) {
            cout << "1/" << i << " + ";
        } else {
            cout << "1/" << i << endl;
        }

        sum = sum + (1.0 / i);
    }

    cout << "Sum of Series upto " << n << " terms : " << sum << endl;

    return 0;
}