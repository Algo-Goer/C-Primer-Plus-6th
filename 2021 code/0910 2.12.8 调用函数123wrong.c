#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    two();
    printf("three\n");
    printf("done!\n");

    return 0;
}

void one_three(void)
{
    printf("one\n");
    return;
}

void two(void)
{
    printf("two\n");
    return;
}