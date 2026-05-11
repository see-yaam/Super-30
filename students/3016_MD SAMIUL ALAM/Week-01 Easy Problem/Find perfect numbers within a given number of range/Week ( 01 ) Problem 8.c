#include <stdio.h>

int main() {
    int start, end, i, j, sum;

    printf("Enter starting: ");
    scanf("%d", &start);

    printf("Enter ending: ");
    scanf("%d", &end);

    printf("The Perfect numbers are:\n");

    for(i = start; i <= end; i++) {
        sum = 0;

        for(j = 1; j < i; j++) {
            if(i % j == 0) {
                sum = sum + j;
            }
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
