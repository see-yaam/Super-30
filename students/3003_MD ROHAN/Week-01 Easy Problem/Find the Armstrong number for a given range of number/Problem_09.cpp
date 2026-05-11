#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    
    for (int n = start; n <= end; n++) {
        int num = n, sum = 0;
        
        while (num != 0) {
            int d = num % 10;
            sum += d * d * d;
            num /= 10;
        }
        
        if (sum == n) {
            cout << n << endl;
        }
    }
    return 0;
}