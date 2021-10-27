//设计一个函数，返回两整数之和
#include <stdio.h>
int sum_two(int a, int b);
int main(void) 
{
    int n1, n2, sum;
    printf("Enter two integers:\n");
    while ((scanf("%d %d", &n1, &n2)) == 2) 
    {
        sum = sum_two(n1, n2);
        printf("%d + %d = %d\n", n1, n2, sum);
        printf("Enter two integers:\n");
    }
    return 0;
}
int sum_two(int a, int b)
{
    int sum_c;
    sum_c = a + b;
    return(sum_c);
}