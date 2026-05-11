#include<stdio.h>
int main()
{
    int n,i;
    float sum=0.0;
    printf("Enter value: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
         printf("1/%d ",i);
         sum=sum+(1/(float)i);
        }
        else
        {
         printf("1/%d + ",i);
         sum=sum+(1/(float)i);
        }
    }
    printf("\n%.2f",sum);
return 0;
}
