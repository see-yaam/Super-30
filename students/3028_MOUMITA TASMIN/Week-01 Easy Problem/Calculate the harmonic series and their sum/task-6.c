
#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Harmonic Series: ";

    for(int i = 1; i <= n; i++)
    {
        cout << "1/" << i;

        if(i != n)
        {
            cout << " + ";
        }

        sum = sum + (1.0 / i);
    }

    cout << endl;
    cout << "Sum of the series = " << sum;

    return 0;
}
