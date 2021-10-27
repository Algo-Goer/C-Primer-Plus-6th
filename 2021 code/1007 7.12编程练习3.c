#include <stdio.h>
int main(void) 
{
    int n;
    int num1 = 0;  //统计偶数的个数
    int num2 = 0; //统计奇数的个数
    int avg1;   //统计偶数的平均数
    int avg2; //统计奇数的平均数
    int sum1 = 0;  //统计偶数之和
    int sum2 = 0;   //统计奇数之和
    printf("Please enter integers until 0:\n");
    
    while(scanf("%d", &n) == 1)
    {
        if (n == 0)
            break;
        else if (n % 2 == 0)
          {  
            num1++;
            sum1 += n;
            avg1 = sum1 / num1;
          }
        else 
          { 
            num2++;
            sum2 += n;
            avg2 = sum2 / num2;
          }
    }
    printf("Even numbers: %d\n", num1);
    printf("Average of even numbers: %d\n", avg1);
    printf("Odd numbers: %d\n", num2);
    printf("Average of odd numbers: %d\n", avg2);

    return 0;
}
