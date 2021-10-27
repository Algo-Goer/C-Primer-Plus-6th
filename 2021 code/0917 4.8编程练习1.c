#include <stdio.h>
int main(void)
{
    char GivenName[20];
    char SurName[20];
    printf("Please input your GivenName and SurName,please:%s %s.\n");
    scanf("%s %s", GivenName, SurName);
    printf("OK! Your name is:%s %s.\n",GivenName, SurName);
    return 0;
}