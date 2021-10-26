#include <stdio.h>
char get_first(void);
int main(void)
{
    char response;
    int guess = 50;
    int max = 100;
    int min = 0;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it. \nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d? Y) yes B) bigger S) smaller\n", guess);
    while ((response = get_first()) != 'Y')
    {
        switch (response)
        {
        case 'B':
            max = guess;
            guess = (min + guess) / 2;
            printf("Is it %d?\n", guess);
            break;
        case 'S':
            min = guess;
            guess = (guess + max) / 2;
            printf("Is it %d?\n", guess);
            break;
        default:
            printf("Error.\n");
            break;
        }
    }
    printf("I knew I could do it!\n");
    return 0;
}

char get_first(void)   //排除空格键的影响
{
    char first_letter;
    first_letter = getchar();
    while (getchar() != '\n')
        continue;
    return first_letter;
}
