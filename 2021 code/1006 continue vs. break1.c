#include <stdio.h>
 
int main() {
 
    //while()
    char CH;
    int count=0;
    while(count < 10){
        CH = getchar();
        if(CH != ' ')
            continue;  //对于 while() 和 do  while() 循环，执行 continue 语句后的下一个行为是对循环的测试表达式求值
        putchar(CH);
        count++;
    }
    printf("Hello, World!\n");
    return 0;
}