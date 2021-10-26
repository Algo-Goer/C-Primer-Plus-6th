#include <stdio.h>
void print_s(void);
int getchoice(int low, int high);
int main()
{
    int res;
    print_s();
    while ((res = getchoice(1, 4)) != 4)
    {
        printf("Good choice: %d.\n", res);
        print_s();
    }
    printf("Bye.\n");
    return 0;
}
void print_s(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files      2) move files\n");
    printf("3) remove files    4) quit\n");
    printf("Enter the number of your choice:\n");
}
int getchoice(int low, int high)
{
    int ans;
    int good;
    good = scanf("%d", &ans);
    while (good == 1 && (ans < low || ans > high))
    {
        printf("%d is not a valid choice; try again\n", ans);
        print_s();
        scanf("%d", &ans);
    }
    if (good != 1)
    {
        printf("Non-numeric input. ");
        ans = 4;
    }
    return ans;
}