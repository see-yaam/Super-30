#include<stdio.h>
int main()
{
    int num,lastdigit,reverse=0;

    printf("Enter value: ");
    scanf("%d",&num);

    int main_num=num;

    while(num!=0)
    {
        lastdigit=num%10;
        reverse=(reverse*10)+lastdigit;
        num/=10;
    }
    printf("Reverse of %d is %d\n",main_num,reverse);

    return 0;
}
