//swap3.c -- 使用指针解决交换函数的问题
#include <stdio.h>
void interchange(int * u, int * v);
int main(void) 
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d\n", x, y);
    interchange(&x, &y);  //把地址发送给函数，而不是x和y的值。这意味着出现在
    //interchange()原型和定义中的形式参数u和v将把地址作为它们的值。因此，应把它们声明为指针。
    //由于x和y是整数，所以u和v是指向整数的指针。
    printf("Now x = %d and y = %d\n", x, y);
    return 0;
}
void interchange(int * u, int * v)  //u和v是指向整数的指针。声明。
{
    int temp;  //在函数体中声明了一个交换值时必需的临时变量temp
    temp = *u;  //temp获得u所指向对象的值。u的值是&x，所以u指向x。这意味着*u可表示x的值。不能省略*。
    //因为这条语句赋给temp的是x的地址（u的值就是x的地址），而非x的值。函数要交换的是x和y的值，而非它们的地址。
    *u = *v; //与此类似，把y的值赋给x。
    *v = temp;
}