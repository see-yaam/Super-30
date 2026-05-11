#include <stdio.h>
#include <math.h>

int main() {
    int n, i, power = 1, sign = 1;
    float x, sum = 0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + sign * pow(x, power);

        sign = -sign;
        power += 2;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
