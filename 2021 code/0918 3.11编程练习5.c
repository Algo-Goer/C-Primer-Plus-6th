#include <stdio.h>
int main(void) 
{
    int age;
    float seconds;
    seconds = 3.156e7;
    printf("what is your age:");
    scanf("%d", &age);
    printf("It is %e seconds.\n", seconds * age) ;

    return 0;

}
