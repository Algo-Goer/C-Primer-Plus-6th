#include <stdio.h>
int sum()
{
    int i,sum = 0;
    for (i=1;i<=100;i++){
        sum+=i;
    }
    return sum;
}
int main()
{
    int a = sum();
    printf("The sum is %d.\n",a);
    return 0;
}