//编写一个程序，创建一个包含26个元素的数组，并在其中存储26个小写字母。然后打印数组所有内容
#include <stdio.h>
#define SIZE 26
int main(void) 
{
    char alphabet[SIZE];
    int index = 0;
    for (char ch = 'a', index = 0; ch <= 'z'; ch++, index++) 
        alphabet[index] = ch;
    for (int index = 0; index < SIZE; index++)
        printf("%c \n", alphabet[index]);

    return 0;
}