#include <stdio.h>

int main() {
    int n;
    long long result = 1;

    printf("Input the number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        result = result * i;
    }

    printf("The Factorial of %d is: %lld\n", n, result);

    return 0;
}
