#include <stdio.h>

int main() {
    int start, end, i, j, sum;

    printf("Input the starting range or number: ");
    scanf("%d", &start);

    printf("Input the ending range of number: ");
    scanf("%d", &end);

    printf("The Perfect numbers within the given range : ");

    for(i = start; i <= end; i++){
    sum = 0;

    for(j = 1; j < i; j++) {
        if(i % j == 0) {
        sum = sum + j;
        }
    }

        if(sum == i && i != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
