//提示用户输入名字，并执行后续操作

#include <stdio.h>
#include <string.h>
#define MAXSIZE 20

int main(void) 
{
    char name[MAXSIZE];
    int width,width1; //输入姓名的长度
    printf("please enter name:\n");
    scanf("%s",name);
    width = strlen(name);
    width1 = width + 3;

    printf("1.打印名字，包括双引号：\n");
    printf("\"%s\"",name); //输出双引号要加斜杠
    printf("\n");

    printf("2.在宽度为20的字段右端打印名字，包括双引号：\n");
    printf("\"%20s\"\n",name);
    printf("\n");

    printf("3.在宽度为20的字段左端打印名字，包括双引号：\n");
    printf("\"%-20s\"\n",name);
    printf("\n");
    
    printf("4.在比姓名宽度宽3的字段中打印名字：\n");
    printf("%*s\n",width1, name);  //*s抑制赋值

    return 0;
}