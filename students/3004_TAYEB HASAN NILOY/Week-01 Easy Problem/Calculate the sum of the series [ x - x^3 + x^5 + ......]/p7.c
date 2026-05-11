#include <stdio.h>

int main() {
    int n, i;
    int x;
    int sum = 0;
    int power = 1;

    printf("Input the value of x: ");
    scanf("%d", &x);

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("\nThe values of the series:\n");

    for(i = 1; i <= n; i++) {

        int term = 1;

        for(int j = 1; j <= power; j++){
        term = term * x;
        }

        if(i % 2 == 0){
        term = -term;
        }

        printf("%d\n", term);

        sum = sum + term;
        power = power + 2;
    }

    printf("\nThe sum = %d\n", sum);

    return 0;
}
