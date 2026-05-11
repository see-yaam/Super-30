#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;

    printf("Input number: ");
    scanf("%d", &num);


    for(int i = num; i != 0; i = i / 10){
    digit = i % 10;
    product = product * digit;
    }

    printf("Product of digits: %d\n", product);

    return 0;
}
