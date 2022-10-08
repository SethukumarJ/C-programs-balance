#include <stdio.h>

int main(void){
    int choice;

    for(int i=0; i<=10; i++){
   printf("\nEnter nuumbers from 1 to 7 to get name of days in a week : ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("Sunday");
        break;
         case 2:
        printf("Monday");
        break;
         case 3:
        printf("Tuesday");
        break;
         case 4:
        printf("Wednesday");
        break;
         case 5:
        printf("Thursday");
        break;
         case 6:
        printf("Friday");
        break;
         case 7:
        printf("Saturday");
        break;

    
    default:
    printf("invalid number");
        break;
    }
    }

 
}