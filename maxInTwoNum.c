// Write a C program to find the maximum between two numbers using Switch statement.

#include<stdio.h>
int main()
{
    int n1,n2,diff;
    printf("Enetr two number to campaire \n");
    scanf("%d %d",&n1,&n2);

    diff = n1>n2;

    switch (diff)
    {
    case 1:
        printf("%d is Max",n1);
        break;

    case 0:
        printf("%d is Max",n2);
        break;
    }
}