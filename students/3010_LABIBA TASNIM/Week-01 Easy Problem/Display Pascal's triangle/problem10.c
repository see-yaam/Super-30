#include <stdio.h>

int main()
{
    int row,col,n,space;
    int PT;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(row=0;row<n;row++)
  {
      PT=1;
        for(space=1;space<=n-row;space++)
        {
            printf(" ");
        }

        for(col=0;col<=row;col++)
        {
            printf("%d ",PT);
            PT=PT*(row-col)/(col+1);
        }

        printf("\n");
    }

    return 0;
}
