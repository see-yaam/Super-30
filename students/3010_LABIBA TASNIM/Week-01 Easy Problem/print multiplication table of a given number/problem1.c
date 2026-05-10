#include<stdio.h>
int main(){

  int num;
   printf("Enter the value= ");
   scanf("%d",&num);

   for(int i=1;i<=10;i++)
   {
    int result=num*i;
   printf("%d*%d=%d\n",num,i,result);
   }
return 0;
}
