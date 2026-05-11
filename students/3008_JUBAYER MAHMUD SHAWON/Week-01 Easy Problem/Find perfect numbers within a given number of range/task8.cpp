#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Input starting range: ";
    cin >> start;
    cout << "Input ending range: ";
    cin >> end;

    cout << "The perfect numbers within the given range: ";

    for (int num = start; num <= end; num++) {
        int sum = 0;

        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }

        if (sum == num && num != 0) {
            cout << num << " ";
        }
    }

    return 0;
}