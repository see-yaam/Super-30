#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int val = 1;
    for (int i = 0; i < rows; i++) {

        for (int x = 1; x <= rows - i; x++) {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                val = 1;
            } else {
                val = val * (i - j + 1) / j; 
            }
            cout << val << "   ";
        }
        cout << endl;
    }

    return 0;
}