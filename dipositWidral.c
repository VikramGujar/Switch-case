
// Develop below program using switch case)

// Write a C program that will read a float and a character from console.
//  The character could be d for deposit or w for withdrawal.

// Starting with a Minimum balance of 2000.



// *Ask the user to initialize the minimum balance and don't 
// allow 0 and -ve values if it is 0 or -ve then print "Ammount Can't be stored".



// *If the user want deposit operation then ask how much ammount he want to deposit and add that ammount

//  with balance and print the balance.

// *if the user want withdrwal operation then ask how much ammount he want to withdrwal and substract that 

//  ammount from the balance and print the balance.



// [Note: If the deposit ammount is negetive or 0 print "Invalid ammount".

//     If the withdrawl ammount is negetive , 0 or greater than balance then print "Invalid ammount"]



// Hints:

// -------

// Declare variables for the amount in float, balance in float and transaction code in char types.



// Test the transaction code, if ‘d’ it is deposit. Test the ammount so that it is not negative.

// If the balance is not negative or positive sum-up

// the balance.

// balance = balance + amount;

// Test the transaction code for withdrawal, ‘w’. If the transaction code is ‘w’

// Minus the withdrawn amount to update the

// balance.

// balance = balance - amount;

// And print the balance.

#include<stdio.h>
int main()
{
    char ch;
    float minBal,diposit,widrall,ballence;

    printf("Starting with a Minimum balance of 2000 input your min balence \n");
    scanf("%f",&minBal);

    if (minBal<1)
    {
    printf("Ammount Can't be stored \n");
    return 0;
    }
    printf("What do you want to do Widral-[W] or Diposit [D]");
    scanf(" %c",&ch);
    if (ch=='d' || ch=='D')
    switch (ch)
    {
    case 'd': case 'D':
            printf("How much ammount you want to deposit\n");
            scanf("%f",&diposit);
            if(diposit<1){
            printf("Invalid ammount");
            }
            ballence = minBal + diposit;
            printf("Your balance is %.2f",ballence);
            break;
    case 'w': case 'W':
            printf("How much ammount you want to Widrall\n");
            scanf("%f",&widrall);
            if(widrall<1 || widrall>minBal){
            printf("Invalid ammount");
            return 0;
            }
            ballence=minBal-widrall;
            printf("Your balance is %.2f",ballence);
            break;
    
    default:
        printf("invalid input");
        break;
    }
    
    
}
