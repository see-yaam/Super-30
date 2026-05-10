#include <stdio.h>

int main()
{
    int start,end,num,temp,r,sum;
    printf("Enter starting value: ");
    scanf("%d",&start);

    printf("Enter ending value: ");
    scanf("%d",&end);

    for(num=start;num<=end;num++)
    {
      temp=num;
      sum=0;

      while(temp!=0)
      {
        r=temp%10;
        sum=sum+r*r*r;
        temp/=10;
      }
    if(sum==num)
       printf("%d ",num);
    }

return 0;
}
