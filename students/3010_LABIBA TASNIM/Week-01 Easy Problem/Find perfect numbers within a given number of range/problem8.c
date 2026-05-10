
#include <stdio.h>

int main()
{
    int start,end,i,j,sum;
    printf("Enter starting value: ");
    scanf("%d",&start);

    printf("Enter ending value: ");
    scanf("%d",&end);

    for(i=start;i<=end;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i && i!=0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
