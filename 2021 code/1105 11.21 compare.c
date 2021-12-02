// 该程序可以正常运行
#include <stdio.h>
#include <string.h> // strcmp()函数的原型在该头文件中，用于比较字符串，就像比较数字一样。相同返回0
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n) 
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");
    return 0;
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin)
    /*
    fgets()函数通过第2个参数限制读入的字符数来解决溢出的问题。该函数专门设计用于处理文件输入
    fgets()函数的第2个参数指明了读入字符的最大数量。如果该参数是n，那么fgets()将读入n-1个字符
    或者读到遇到的第一个运行符为止
    如果fgets()读到第一个换行符，会把它存储在字符串中。这点与gets()不同，gets()会丢弃换行符
    fgets()函数的第3个参数指明要读入的文件。如果读入从键盘输入的数据，则以stdin（标准输入）作为参数，该标识符定义在stdio.h中
    因为fgets()函数把换行符放在字符串末尾（假设输入行不溢出），通常要与fputs()函数配对使用，除非该函数不在字符串末尾添加换行符
    fputs()函数的第2个参数指明它要写入的文件。如果要显示在计算机显示器上，应使用stdout（标准输出）作为该参数
    */
   

}