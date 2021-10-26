//计算税金--106APrimer--20211010
#include <stdio.h>
#define BARRIER1 17850 //不同税率之间的美元分界线
#define BARRIER2 23900
#define BARRIER3 29750
#define BARRIER4 14875
#define RATE1 0.15f //不同税率
#define RATE2 0.28f

int main(void)
{
    int number, barrier, wages;
    float tax;
    printf("**********************************ABSTRACT*********************************\n");
    printf("Enter the category (between 1 and 4):\n");
    printf("1)Single                                    2)$Householder\n");
    printf("3)Married, common property                  4)Married, divorced\n");
    printf("***************************************************************************\n");

    while (scanf("%d", &number) == 1)
    {
        if (number == 1 || number == 2 || number == 3 || number == 4)
        {
            switch (number)
            {
            case 1:
                barrier = BARRIER1;
                break;
            case 2:
                barrier = BARRIER2;
                break;
            case 3:
                barrier = BARRIER3;
                break;
            case 4:
                barrier = BARRIER4;
                break;
            }
            printf("Please enter your wages:\n");
            scanf("%d", &wages);
            if (wages <= barrier)
                tax = wages * RATE1;
            else
                tax = barrier * RATE1 + (wages - barrier) * RATE2;
            printf("Your tax is %.2f.\n", tax);
            continue; //程序通过循环让用户可以多次输入
        }
        printf("Bye.\n");
    }
    return 0;
}