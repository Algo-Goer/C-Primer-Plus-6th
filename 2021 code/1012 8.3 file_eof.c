//file_eof.c --打开一个文件并显示该文件
#include <stdio.h>
#include <stdlib.h> //使用exit()
int main()
{
    int ch;
    FILE *fp;
    char fname[50]; //存储文件名
    printf("Enter the name of the file:");
    scanf("%s", fname);
    fp = fopen(fname, "r"); //打开待读取文件
    if (fp == NULL)         //如果失败
    {
        printf("Failed to open file. Bye\n");
        exit(1); //退出程序
    }
    // getc(fp)从打开的文件中获取一个字符
    while ((ch = getc(fp) != EOF))
        putchar(ch);
    fclose(fp); //关闭文件
    return 0;
}