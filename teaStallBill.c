// Title: Interactive Tea Stall Experience



// Introduction:

// Imagine strolling down a charming street, enticed by the inviting aroma of freshly brewed beverages.

// You arrive at a cozy tea stall, greeted by a friendly attendant. Prepare for an interactive journey through the Tea Stall Counter!



// Scenario:



// Welcome and Menu:

// You enter the tea stall, warmly welcomed by the attendant:



// Attendant: "Welcome to our Tea Stall Counter! Our menu:"



// Tea --------------------- Rs. 10

// Coffee ------------------ Rs. 20

// Cold coffee ------------- Rs. 50

// Exit

// Attendant: "Choose by entering a number (1-4):"



// [User enters choice]



// Customize Order:

// Based on your choice, the attendant guides you:



// [If choice is 1:]

// Attendant: "How many cups of refreshing tea?"



// [If choice is 2:]

// Attendant: "How many cups of aromatic coffee?"



// [If choice is 3:]

// Attendant: "How many cups of chilled cold coffee?"



// [User enters quantity]

// Total and Payment:

// The attendant shares your order total and awaits payment:



// Attendant: "Total for [quantity] cup(s): Rs. [total_price]."



// Attendant: "Enter your payment amount: Rs."



// [User enters amount_paid]



// Attendant: "Change: Rs. [change]."



// Continuation or Farewell:

// Choose to explore more or conclude your visit:



// Attendant: "Explore more or finalize? (Type 'Y' for Yes or 'N' for No):"



// [User enters order_again]



// [If user wants to continue:]

// Attendant: "Certainly, let's explore."



// [If user doesn't want to continue:]

// Attendant: "Thank you for visiting! We look forward to serving you again soon!"


#include<stdio.h>
int main()
{
    int choice,tea,coffee,coldCoffee,totalPrice;
    printf("Welcome to our Tea Stall Counter! \n");
    printf("Our menu \n");
    printf("Enter-1.Tea --------------------- Rs. 10 \n");
    printf("Enter-2.Coffee ------------------ Rs. 20 \n");
    printf("Enter-3.Cold coffee ------------- Rs. 50 \n");

    printf("Enter Your choice \n");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("How many cups of refreshing tea? \n");
        scanf("%d",&tea);
        totalPrice = 10 * tea;
        printf("Total for [%d] cup(s): Rs. [%d] \n",tea,totalPrice);
    }
    else if(choice==2)
    {
        printf("How many cups of aromatic coffee? \n");
        scanf("%d",&coffee);
        totalPrice = 20 * coffee;
        printf("Total for [%d] cup(s): Rs. [%d] \n",coffee,totalPrice);
    }else if(choice==3)
    {
        printf("How many cups of chilled cold coffee? \n");
        scanf("%d",&coldCoffee);
        totalPrice = 50 * coldCoffee;
        printf("Total for [%d] cup(s): Rs. [%d] \n",coldCoffee,totalPrice);        
    }else
    {
        printf("You entered wrong choice");
    }

    
    
    
}

