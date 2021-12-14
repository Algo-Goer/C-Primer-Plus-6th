#include <stdio.h>
#include <string.h> // strcpy()的原型在string.h头文件中
#define SIZE 40
#define LIM 5
char * s_gets(char *st, int n);

int main(void)
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else
        {
            strcpy(qwords[i], temp); 
/*
strcpy()的第2个参数temp指向的字符串被拷贝至第1个参数(qword[i])指向的数组中。
拷贝出来的字符串被称为target字符串，最初的字符串被称为source字符串。
strcpy()参数顺序：第1个是target字符串，第2个是source字符串
*/
            
/* 
也可以通过比较字符串进行判断：
```c
if (strncmp(temp, "q", 1) != 0)
temp字符串和q的第一个元素是否相等
```
*/
            i++;   // 只有在输入以q开头的单词后才会递增计数器i
        }
    }
    puts("Here are the words accepted: ");
    for (i = 0; i < LIM; i++)
        puts(qwords[i]);

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
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
