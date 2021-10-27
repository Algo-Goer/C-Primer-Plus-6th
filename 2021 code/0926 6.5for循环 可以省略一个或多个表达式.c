//for_none.c
#include <stdio.h>
int main(void) 
{
    int ans, n;
    ans = 2;
    for (n = 3; ans <= 25;) //省略第三个表达式
         ans = ans * n;
    printf("n = %d; ans = %d.\n", n, ans);
    return 0;
}