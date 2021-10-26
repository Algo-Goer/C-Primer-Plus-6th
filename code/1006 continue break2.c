#include <stdio.h>
int main() {
    char ch;
    int cunt;
    int i;
    for(cunt=0;cunt<10;cunt++){
        ch = getchar();
        for(i=0;i<5;i++){
            if (ch != ' ')
                continue;
            putchar(ch);
            printf("我是内层循环的---小可爱！！！\n");
        }
        printf("我是外层循环的---小可爱！！！\n");
        printf("如果continue语句在嵌套循环内，则只会影响包含continue的内层循环，不影响外层循环！！！\n");
    }
    printf("Hello, World!\n");
    return 0;
}