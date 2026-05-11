#include <stdio.h>

int main() {
    int rows, i, j, space;
    long long value;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {


    for(space = 0; space < rows - i - 1; space++){
    printf("  ");
    }

    value = 1;

    for(j = 0; j <= i; j++){
    printf("%lld   ", value);

    value = value * (i - j) / (j + 1);
    }

        printf("\n");
    }

    return 0;
}

