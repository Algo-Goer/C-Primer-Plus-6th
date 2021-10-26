#include <stdio.h>
#include <string.h>
int main(void)
{
    char Givenname[20];
    char Lastname[20];
    printf("Enter Givenname:\n");
    scanf("%s", Givenname);
    printf("Enter Lastname:\n");
    scanf("%s", Lastname);
    printf("%s %s\n", Givenname, Lastname);
    printf("%*d %*d\n", strlen(Givenname), strlen(Givenname), strlen(Lastname), strlen(Lastname));
    printf("%s %s\n", Givenname, Lastname);
    printf("%*d %*d\n", -strlen(Givenname), strlen(Givenname), -strlen(Lastname), strlen(Lastname));
    return 0;
}