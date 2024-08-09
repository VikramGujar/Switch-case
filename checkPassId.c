// Write a C program to take user Id as 1001 and Pasword as 1010. Ask the user to enter his id, if the id is valid 

// then ask the user to enter his password ,if the password is correct then print the name of the user, otherwise 

// the program will print incorrect Passoword and if the Id doesnot exits, the program will print Incorrect Id.

// develop this program by using Switch case. 

#include<stdio.h>
int main()
{
    int id,pass;
    char name[16];
    //  user Id as 1001 and Pasword as 1010
    printf("Enetr you name :");
    scanf(" %s",name);

    printf("\n Enrt Your Id :");
    scanf("%d",&id);

    switch (id)
    {
    case 1001:
        printf("\n Enetr your passworld :");
        scanf("%d",&pass);
        if(pass==1010)
        {
            printf("\n Name :%s \n",name);
        }else{
            printf("PassWorld is Wrong");
        }
        break;
    
    default:
        printf("\n Wrong user ID");
        break;
    }

}