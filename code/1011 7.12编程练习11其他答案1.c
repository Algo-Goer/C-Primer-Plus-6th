/*ABC邮购杂货店出售的洋蓟售价为2.05美元/磅，甜菜售价为1.15美元/磅胡萝卜售价为1.09/磅。在添加运费之前，100美元的订单有5%的打折优惠。
少于或者等于5磅的订单收取6.5美元的运费和包装费，5磅-20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上每续重1磅增加
0.5美元。编写一个程序，在循环中使用switch语句实现用户输入不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数
，c是胡萝卜的磅数，q是退出订购。程序要记录累计的重量，即如果用户输入的是4磅的甜菜，然后输入5磅的甜菜，程序应报告9磅的甜菜。然后程序
应显示所有的购买信息：物品售价、订购的重量（单位磅），订购蔬菜的费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用
总额。
*****尝试功能不同进行函数分段，不熟练花费了很多时间
*/
#include <stdio.h>
#define A_PRICE 2.05 //洋蓟
#define B_PRICE 1.15 //甜菜
#define C_PRICE 1.09 //胡萝卜
#define BREAK1 5
#define BREAK2 20
#define BREAK3 100
#define DISCOUNT 0.05
#define COST1 6.5
#define COST2 14
#define ARISE 0.5
void show();
void weight(char ch);
double cost(double weight);
double a_weight = 0;
double b_weight = 0;
double c_weight = 0;
double a_price = 0;
double b_price = 0;
double c_price = 0;

int main(void)
{
    char ch;
    double sum_cost;
    double sum_price;
    double total;
    double discount = 0;
    show();
    while ((ch = getchar()) != 'q')
    {
        if (ch == '\n')
            continue;
        weight(ch);
        show();
    }
    a_price = A_PRICE * a_weight;
    b_price = B_PRICE * b_weight;
    c_price = C_PRICE * c_weight;
    sum_price = a_price + b_price + c_price;
    if (sum_price >= 100)
    {
        sum_price *= 0.95;
        discount = a_price + b_price + c_price - sum_price;
    }
    total = sum_price + cost(a_weight + b_weight + c_weight);

    printf("您需要支付的蔬菜的费用为%lf美元，订单的总费用为%lf美元，折扣%lf美元，运费和包装费%lf美元", sum_price, total, discount, cost(a_weight + b_weight + c_weight));
}
void show()
{
    printf("请选择购买的蔬菜：");
    printf("a.洋蓟\t\t");
    printf("b.甜菜\t\t");
    printf("c.胡萝卜\t\t");
    printf("q.退出\n");
}
void weight(char ch)
{
    double a = 0;
    double b = 0;
    double c = 0;
    switch (ch)
    {
    case 'a':
        printf("请输入洋蓟的磅数：\n");
        scanf("%lf", &a);
        a_weight += a;
        break;
    case 'b':
        printf("请输入甜菜的磅数：\n");
        scanf("%lf", &b);
        b_weight += b;
        break;
    case 'c':
        printf("请输入胡萝卜的磅数：\n");
        scanf("%lf", &c);
        c_weight += c;
        break;
    default:
        printf("请输入正确选项！\n");
    }
}
double cost(double weight)
{
    double cost;
    if (weight <= BREAK1)
    {
        cost = COST1;
    }
    else if (weight <= BREAK2)
    {
        cost = COST2;
    }
    else
    {
        cost = COST2 + ARISE * (weight - BREAK2);
    }
    return cost;
}
