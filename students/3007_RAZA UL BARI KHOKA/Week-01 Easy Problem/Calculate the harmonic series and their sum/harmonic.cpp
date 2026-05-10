#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0.0;

    printf("Input the number: ");
    scanf("%d", &n);

    printf("The harmonic series is :\n");

    for(int i = 1; i <= n; i++)
    {
        printf("1/%d", i);

        if(i < n)
        {
            printf(" + ");
        }

        sum = sum + (1.0 / i);
    }

    printf("\nSum of the series = %.2f\n", sum);

    return 0;
}
