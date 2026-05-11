
#include <stdio.h>

int main() {
    int start, end, i, temp, digit, sum, count;

    printf("Input starting number of range: ");
    scanf("%d", &start);

    printf("Input ending number of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers in given range are: ");

    for(i = start; i <= end; i++) {

        temp = i;
        sum = 0;
        count = 0;

        for(temp = i; temp != 0; temp = temp / 10){
            count++;
        }

        for(temp = i; temp != 0; temp = temp / 10){
        digit = temp % 10;

        int power = 1;

        for(int j = 1; j <= count; j++) {
            power = power * digit;
        }

        sum = sum + power;
        }

        if((sum == i && i == 1) || (sum == i && i >= 100)){
        printf("%d ", i);
        }
    }

    return 0;
}
