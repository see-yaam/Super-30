#include <stdio.h>
int main()
{
    int s, d;
    scanf("%d %d", &s, &d);
    int total_eliminant = 0;
    int totalCore = 0;
    int totalRising = 0;
    int highestScore = 0;
    for (int i = 0; i < s; i++)
    {

        int arr[d];
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &arr[j]);
        }

        int sum = 0;
        int score = 0;
        int eliminant = 0;
        int primeCount = 0;

        for (int j = 0; j < d; j++)
        {

            // eliminant student count korbo
            if (arr[j] < 5)
            {
                //  printf("Eliminated\n");
                eliminant = 1;
                break;
            }
        }

        if (eliminant == 1)
        {
            total_eliminant++;
            continue;
        }

        // sum diye score ber korbo
        for (int j = 0; j < d; j++)
        {
            sum = sum + arr[j];
        }

        if (sum % 2 == 0)
        {
            score = sum / 2;
        }
        else
        {
            score = (sum * 3) + 1;
        }

        // bonus add korbo using prime
        for (int j = 0; j < d; j++)
        {
            int count = 0;

            for (int i = 2; i < arr[j]; i++)
            {
                if (arr[j] % i == 0)
                {
                    count++;
                    break;
                }
            }

            if (count == 0)
                primeCount++;
        }

        if (primeCount >= 4)
        {
            score = score + 20;
        }

        if (score > 200)
        {
            totalCore++;
        }
        else
        {
            totalRising++;
        }

        if (score > highestScore)
        {
            highestScore = score;
        }

        // for (int i = 0; i < d; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
        // printf("\n");
    }

    printf("Total Eliminated: %d\n", total_eliminant);
    printf("Total Core Warriors: %d\n", totalCore);
    printf("Total Rising Warriors: %d\n", totalRising);
    printf("Highest Score: %d\n", highestScore);
    return 0;
}




