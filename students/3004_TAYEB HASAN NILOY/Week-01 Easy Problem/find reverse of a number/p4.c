#include <stdio.h>

int main() {
    int num, digit;
    int reverse = 0;


    printf("Input number: ");
    scanf("%d", &num);


    int original = num;

    for(int i = num; i != 0; i = i / 10){
    digit = i % 10;
    reverse = reverse * 10 + digit;
    }


    printf("Reverse of %d = %d\n", original, reverse);

    return 0;
}
