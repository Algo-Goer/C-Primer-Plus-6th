//talkback.c-- 演示与用户交互
#include <stdio.h>
#include <string.h> //提供strlen()函数原型
#define DENSITY 62.4 //人体密度（单位：磅/立方英尺）
int main(void)
{
    int age;
    int xp;
    char name[40];
    printf("Please enter your first name.\n");
    scanf("%s", name);
    printf("All right, %s, what's your age?\n", name);
    scanf("%d", &age);
    xp = age + X;
    printf("That's a %s! You must be at least %d.\n", B, xp);
    return 0;
}
    