// 用strcmp()函数检查程序是否要停止读取输入
// quit_chk.c -- 某程序开始部分
#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"            // 字符串字面量or字符串常量
char *s_gets(char *st, int n); // 函数原型，别忘记加分号

int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines (type quit to quit):\n", LIM);
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(input[ct], STOP) != 0)
    {
        ct++;
    }
/* 
有时输入空行（即按下Enter或Return）表示结束输入更方便。只需修改while循环条件即可：
```c
while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
```
*/
    printf("%d strings entered\n", ct);
    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin); //从指定的流 stream 读取一行，并把它存储在 str 所指向的字符串内。当读取 (n-1) 个字符时，或者读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。
    // string.h
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}