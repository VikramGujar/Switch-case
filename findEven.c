#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number to identify\n");
    scanf("%d",&num);

    switch ((num%2))
    {
    case 0:
        printf("%d is a even numeber",num);
        break;
    
    default:
        printf("%d is a odd number",num);
        break;
    }
}