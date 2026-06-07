#include <stdio.h>



int main() 
{
    //variables
    int option;
    double balance = 500;

    printf("Welcome ATM PROTOTYPE\n");

    printf("Please Select a option\n");
    
    printf("NUM 1\n");
    printf("Add deposit of money in your account\n\n");

    printf("NUM 2\n");
    printf("Retire money of your account\n\n");

    printf("NUM 3\n");
    printf("View current balance\n\n");

    printf("NUM 4\n");
    printf("EXIT\n");

    scanf("%d", &option);

    switch(option)
    {
        //example temporal for this commit, this is a test 
        case 1:
            printf("insert quantity\n");
            break;
        case 2: 
            printf("retiring money...\n");
            break;
        case 3:
            printf("Your current balance is $%f\n", balance);
            printf("\n");
            break;
        case 4:
            printf("Exit of system...\n");
            printf("bye\n");
            break;
    }

    return 0;
}


