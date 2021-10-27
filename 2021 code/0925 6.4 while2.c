//注意分号位置
#include <stdio.h>
int main(void) 
{
    int n = 0;
    while (n++ < 3);
       printf("n is %d\n", n);
    printf("That's all the program does.\n");
    return 0;
}