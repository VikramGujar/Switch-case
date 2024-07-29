#include<stdio.h>
int main()
{
    int day;
    printf("Enter the day number between 1-7 \t");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("SUNDAY \n");
        break;

    case 2:
        printf("MONDAY \n");
        break;

    case 3:
        printf("TUSEDAY \n");
        break;

    case 4:
        printf("WENSDAY \n");
        break;

    case 5:
        printf("THURSDAY \n");
        break;                
    
    case 6:
        printf("FRIDAY \n");
        break;

    case 7:
        printf("SATURDAY \n");
        break;
    default:
        printf("Invalid Input");
        break;
    }
   
    

}