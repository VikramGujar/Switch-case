#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter a character to find its vowel or consonant \t");
    scanf(" %c",&alpha);

    if(alpha<='Z' && alpha>= 'A')
    {
        alpha = alpha+32;
    }
    if (alpha>='a' && alpha<='z')
    {
    
    switch (alpha)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u': printf("\n %c is a Vowel",alpha);
        break;
    
    default:
    printf("\n %c is a Consonant",alpha);
        break;
    }
    }else if (alpha>='0' && alpha <='9'){
        printf("%c is a digit",alpha);
    }else
    {
        printf("%c is a special charecter",alpha);
    }
    
}