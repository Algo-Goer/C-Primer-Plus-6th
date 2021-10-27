#include <stdio.h>
int main(void) 
{
    char fname[20], lname[20];

    printf("Please enter your first name: ");
    scanf("%s", fname);
    printf("Please enter your last name: ");
    scanf("%s", lname);
    printf("Hello! %s %s.\n", fname, lname);

    return 0;
}