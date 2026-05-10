#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout<<"Enter the Num:";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    cout<<"Fact is:" << fact;

    return 0;
}
