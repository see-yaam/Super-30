#include <iostream>
using namespace std;

int main() {
    int n;
    float s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        s = s + 1.0 / i;
        cout << "1/" << i;
        if (i < n) cout << " + ";
    }
    cout << endl << s << endl;
    return 0;
}