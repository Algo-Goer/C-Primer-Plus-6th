//计算显示订单所有信息--106APrimer-20211010
#include <stdio.h>
#define ARTICHOKE 2.05f //洋蓟单价
#define BEET 1.15f      //甜菜单价
#define CARROT 1.09f    //胡萝卜单价
#define BARRIER1 100.0f //100美元的订单有5折优惠
#define DISCOUNT 0.05f
#define BARRIER2 5.0f //小于等于5 pounds的订单收取$6.5的运费和包装费
#define FEE1 6.5f
#define BARRIER3 20.0f //5~20 pounds的订单收取$14的运费和包装费
#define FEE2 14.0f
#define FEE3 0.5f //超过20 pounds的订单在$14的基础上每续重1 pound增加$0.5
int main(void)
{
    char letter;
    float pounds1 = 0.0;
    float pounds2 = 0.0;
    float pounds3 = 0.0;
    float pounds4 = 0.0;
    float w1 = 0.0; //三种蔬菜重量
    float w2 = 0.0;
    float w3 = 0.0;
    float p1 = 0.0; //各自总价
    float p2 = 0.0;
    float p3 = 0.0;
    float w = 0.0; //蔬菜总重量
    float sum = 0.0;
    float discount = 0.0;
    float fee = 0.0; //运费和包装费
    printf("********************************ABSTRACT*******************************\n");
    printf("Enter the letter corresponding to your desired vegetables:\n");
    printf("a)Artichoke($2.05/pound)                b)Beet($1.15/pound)\n");
    printf("c)Carrot($1.09/pound)                   d)Quit\n");
    printf("***********************************************************************\n");
    while ((letter = getchar()) != 'q')
    {
        if (letter == '\n')
        {
            printf("Continue to enter the letter corresponding to your desired vegetables:\n");
            continue;
        }
        switch (letter)
        {
            case 'a':
            {
            printf("Please enter the pounds of artichoke you want to buy:\n");
            scanf("%f", &w1);
            pounds1 += w1;
            continue;
            }
            case 'b':
            {
            printf("Please enter the pounds of beet you want to buy:\n");
            scanf("%f", &w2);
            pounds2 += w2;
            continue;
            }
            case 'c':
            {
            printf("Please enter the pounds of carrot you want to buy:\n");
            scanf("%f", &w3);
            pounds3 += w3;
            continue;
            }
            default:
            {
            printf("Please enter again:\n");
            continue;
            }
        }
    }
    w = pounds1 + pounds2 + pounds3;
    printf("The sum of pounds:%.2f\n", w);
    p1 = ARTICHOKE * pounds1;
    p2 = BEET * pounds2;
    p3 = CARROT * pounds3;
    sum = p1 + p2 + p3;
    if (sum >= BARRIER1)
    {
        discount = sum * DISCOUNT;
        sum -= discount;
    }
    if (w <= BARRIER2)
    {
        fee = FEE1;
        sum += FEE1;
    }
    else if (w > 5 && w <= 20)
    {
        fee = FEE2;
        sum += FEE2;
    }
    else
    {
        sum += FEE2 + (w - 20) * FEE3;
        fee = FEE2 + (w - 20) * FEE3;
    }
    printf("**********************************ORDER*********************************\n");
    printf("Enter the letter corresponding to your desired vegetables:\n");
    printf("a)Artichoke($2.05/pound):%f pounds, %f $.\n", pounds1, p1);
    printf("b)Beet($1.15/pound):%f pounds, %f $.\n", pounds2, p2);
    printf("c)Carrot($1.09/pound):%f pounds, %f $.\n", pounds3, p3);
    printf("Total orders:%f $\n", p1 + p2 + p3);
    printf("Discount:%f $\n", discount);
    printf("Freight and packing costs:%f $\n", fee);
    printf("Total fees:%f $\n", sum);
    printf("************************************************************************\n");
    return 0;
}
