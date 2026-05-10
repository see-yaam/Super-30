#include<stdio.h>
int main()
{
    int num;
    long long fact=1;
    printf("Enter value: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d is %lld",num,fact);
    return 0;
}
