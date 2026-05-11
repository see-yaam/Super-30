#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("The Harmonic Series is :\n");

    for(i = 1; i <= n; i++) {
        printf("1/%d", i);

        if(i != n) {
            printf(" + ");
        }

        sum = sum + (1.0 / i);
    }

    printf("\nSum = %f\n", sum);

    return 0;
}
