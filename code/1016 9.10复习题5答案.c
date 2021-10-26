//如果把复习题4改成返回两个double类型的值之和，修改函数如下
#include <stdio.h>
double sum_two(double x, double y);
int main(void) 
{
    double n1, n2, sum;   
    printf("Enter two numbers:\n");
    while((scanf("%lf %lf", &n1, &n2)) == 2)   //%f代表单精度浮点型数据（float），%lf代表双精度浮点型数据（double）。
    {
        sum = sum_two(n1, n2);
        printf("%lf + %lf = %lf\n", n1, n2, sum);
        printf("Enter two numbers:\n");
    }
    return 0;    
}
double sum_two(double x, double y)
{
    return x + y;
}