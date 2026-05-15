#include<stdio.h>
int main(){

    int pass= 3030;
    int input,day,marks,task;
    int chance=0;

    while ( chance < 3){
        printf("Enter Password:\n");
        scanf("%d",&input);

        if(input == pass){
            printf("\nAccess Granted\n");
            break;
        }
        else {
            chance++;

            if(chance < 3){
                printf("Wrong Password\n");
                printf("%d Attempts Left\n\n", 3 - chance);
            }
            else{
                printf("System Blocked\n");
                return 0;
            }
        }
    }
    printf("\nEnter Total Present Days: ");
    scanf("%d", &day);

    marks = day;

    if(day == 5)
    {   printf("Perfect Attendance Bonus = 5\n");
        marks = marks + 5;
    }
    else
    {
        marks = marks - 3;
    }

    printf("All Tasks Submitted?\n");
    printf("1 = Yes\n0 = No\n");
    scanf("%d", &task);

    if(task == 1)
    {   printf("Task Bonus = 10\n");
        marks = marks + 10;
    }
    else
    {
        marks = marks - 10;
    }

    printf("\nFinal Marks = %d\n", marks);

    return 0;




}
