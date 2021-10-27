#include <stdio.h>
void alter(int *pa, int *pb); //指针应用，模仿9.15swap3.c
int main(void)
{
    int n1, n2;
    printf("Enter two integers:\n");
    while (scanf("%d %d", &n1, &n2) == 2)
    {
    alter(&n1, &n2);
    printf("Now n1 = %d, n2 = %d\n", n1, n2);
    }
    return 0;
}
void alter(int *pa, int *pb)
{
    int temp;
    temp = *pa + *pb;
    *pb = *pa - *pb;
    *pa = temp;
}