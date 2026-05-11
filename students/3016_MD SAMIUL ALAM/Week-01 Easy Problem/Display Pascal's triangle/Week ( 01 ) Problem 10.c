#include <stdio.h>

int main() {
    int n, i, j, space, value;

    printf("Enter number of n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        for(space = 1; space < n - i; space++) {
            printf(" ");
        }

        value = 1;

        for(j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
