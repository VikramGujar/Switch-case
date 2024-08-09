// Write a C program that will ask for a person’s name and his/her game score.
// Then it will ask for a second person’s name and score.
//  The program will print the winner’s name and also print by how many 
// points that person won by comparing the scores. Develop this program by using switch case.

#include<stdio.h>
int main()
{
    char p1name[10],p2name[10];
    int p1score,p2score,diff;

    printf("Player-1 Enter Your name and Score in the Game \n");
    scanf(" %s",p1name);
    scanf("%d",&p1score);

    printf("Player-2 Enter Your name and Score in the Game \n");
    scanf(" %s",p2name);
    scanf("%d",&p2score);
    diff=p1score>p2score;

    switch (diff)
    {
    case 1:
         printf("Player-1 is the winnar\n");
        diff=p1score-p2score;
        printf("Congratulations!!! %s \n",p1name);
        printf("You won by %d points",diff);
        break;
    
    case 0:
    printf("Player-2 is the winnar\n");
        diff=p2score-p1score;
        printf("Congratulations!!! %s \n",p2name);
        printf("You won by %d points",diff);
    
    default:
        printf("Congratulatins!!!\n");
        printf("You both got the same points\n");
        printf("YOU BOTH ARE WINNERS!!!");
        break;
    }
 
}