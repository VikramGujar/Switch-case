#include<stdio.h>
#include<math.h>
int main()
{
    char oprator;
    float value1,value2;

    printf("--------------------------------------------------------------------------------\n");
    printf("\t\t\t\t Calculator \n");

    printf("--------------------------------------------------------------------------------\n");
    printf("\t\t\t\tM E N U \n");
    printf("--------------------------------------------------------------------------------\n");
    start:
    printf("\t\t\t Enter Values to perform Opration \t");
    scanf("%f %f",&value1,&value2);

    printf("\t\t\t\t +. ADD \n");
    printf("\t\t\t\t -. SUB \n");
    printf("\t\t\t\t *. MUL \n");
    printf("\t\t\t\t %. MOD \n");
    printf("\t\t\t\t /. DIV \n");
    printf("\t\t\t\t E. EXIT \n");
    printf("\t\t\t Enter Values to perform Oprand \t");
    scanf(" %c",&oprator);
    switch(oprator){
        case '+':
        printf("SUM is =%.2f \n",value1+value2);
        break;
        case '-':
        printf("SUB is =%.2f \n",value1-value2);
        break;
        case '*':
        printf("MUL is =%.2f \n",value1*value2);
        break;
        case '%':
        printf("MOD is =%.2f \n",fmod(value1,value2));
        break;
        case '/':
        printf("DIV is =%.2f \n",value1/value2);
        break;
        case 'e': case'E':
        return 0;

        default:
        printf("Invalid input \n");
        break;        

    }
    goto start;

}