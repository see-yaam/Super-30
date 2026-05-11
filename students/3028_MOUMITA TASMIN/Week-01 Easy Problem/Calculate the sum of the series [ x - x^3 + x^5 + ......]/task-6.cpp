#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, i;
    float x,sum=0;

    cout << "Enter the value of x : ";
    cin >> x;

    cout << "Enter the number of terms: ";
    cin >> n;

    for(i=0; i<n; i++)
    {
        float term = pow(x,(2*i+1));

        if(i%2==0)
            sum =sum + term ;
        else
            sum = sum - term ;
    }

    cout << " the sum of the series is : " << sum;

    return 0;
}
