// Write a C program to take user Id as 1001 and Pasword as 1010. Ask the user to enter his id, if the id is valid 

// then ask the user to enter his password ,if the password is correct then print the name of the user, otherwise 

// the program will print incorrect Passoword and if the Id doesnot exits, the program will print Incorrect Id.

// develop this program by using Switch case. 


#include<stdio.h>
int main()
{
    int uid=1001;
    int upass=1010;
    char uname[10];
    printf("Entr your name");
    scanf("%s",uname);
    printf("Enter user ID");
    scanf("%d",&uid);

    switch (uid)
    {
    case 1001:
        printf("Enter a password");
        scanf("%d",&upass);

        if (upass==1010)
        {
            printf("user %d \n",uid);
            printf("Name : %s ",uname);
        }else{
            printf("incorrect Passoword");
        }
        
        break;
    
    default:
    printf("Id doesnot exits");
        break;
    }
}