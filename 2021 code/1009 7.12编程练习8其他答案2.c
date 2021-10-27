/* ##########################################################################
   #提示用户输入一周工作时数，然后打印工资总额、税金和净收入。              #
   # 假设如下：                                                             #
   # a.基本工资等级菜单供用户选择                                                     #
   #    *****************************************************************   #
   #    Enter the number corresponding to the desired pay rate or action:   #
   #    1) $8.75/hr                           2) $9.33/hr                   #
   #    3) $10.00/hr                          4) $11.20/hr                  #
   #    5) quit                                                             #
   #    *****************************************************************   #
   # b.加班（超过40小时）=1.5倍的时间                                       #
   # c.税率：  前300美元为15%                                               #
   #           续150美元为20%                                               #
   #           余下的为25%                                                  #
   # 用#define定义符号常量。不用在意是否符合当前税法                        #
   ########################################################################## */

#include <stdio.h>
#define WORK_T_W 40.0 //每周工作40小时
#define TIMES 1.5 //加班计算倍率
#define BREAK1 300.0 //300美元界限
#define BREAK2 450.0 //450美元界限
#define RATE1 0.15 //前300美元税率为15%
#define RATE2 0.2 //续150美元（即300--450美元）税率为20%
#define RATE3 0.25 // 超过450美元部分税率为25%
#define TAX_BASE1 (BREAK1*RATE1) //350美元时的税赋
#define TAX_BASE2 (TAX_BASE1+(BREAK2-BREAK1)*RATE2) //450美元时的税赋
#define MAX 168.0 //周最多工作时间


int main(void)
{
    float hour_wage=.0; //时薪
    float work_hrs=.0; //工作时数
    float tax=.0; //税金
    float salary=.0; //工资总额
    float income=.0; //净收入
    char option='0';
    int status;

    /* ######################### 工资等级菜单显示及选择 ############################# */
    while(option<'1'||option>'5') // 菜单的显示与选择处理
    {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr\t\t\t\t2) $9.33/hr\n");
        printf("3) $10.00/hr\t\t\t\t4) $11.20/hr\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");
        switch(option=getchar())
        {
            case '1': hour_wage=8.75;
                      break;
            case '2': hour_wage=9.33;
                      break;
            case '3': hour_wage=10.00;
                      break;
            case '4': hour_wage=11.20;
                      break;
            case '5': break;
            default : printf("Enter error!!!\nPlease choose the right option!\n");
                      break;
        }
        while(getchar()!='\n')
            continue; //丢掉缓冲区剩余字符,以免干扰下次程序读取输入
    }

    /* ############################## 工作小时输入处理及工资计算 ################################ */
    if(option!='5') //option是1--4时 程序继续 要求用户输入及计算工资
    {
        printf("You entered the number of option is %2c ,hourly wage is $%.2f/hr.\n",option,hour_wage);
        printf("The maximum working time per week is 168 hours and the minimum is 0 hours.\n");
        printf("Enter your work hours of the week...\n");

        /* ********用户输入工作小时数验证********* */
        while((status=scanf("%f",&work_hrs))!=1||work_hrs<0||work_hrs>MAX)//用户工作小时输入判断，错误时需要重新输入
        {
            while(getchar()!='\n')
                continue;//丢掉缓冲区剩余字符
            printf("The work hours entered error!!! You have to retype!\n");
            printf("The maximum working time per week is 168 hours and the minimum is 0 hours.\n");
            printf("Enter your work hours of the week...\n");
        }
        while(getchar()!='\n')
            continue;//丢掉缓冲区剩余字符，本程序中无此处并无影响

        /* ***********工资及税金计算************* */
        printf("You Entered the work-hour is: %.2f\n",work_hrs);
        if(work_hrs<=WORK_T_W)
            salary=work_hrs*hour_wage; //工作时数小于等于40hr时的薪资计算方式
        else
            salary=(work_hrs+(work_hrs-WORK_T_W)*TIMES)*hour_wage; //工作时数大于40hr时的薪资计算（加班计算为1.5倍）
        if(salary<=BREAK1)
            tax=salary*RATE1; //工资低于300美元时，的税金计算方法
        else if(salary<=BREAK2)
            tax=TAX_BASE1+(salary-BREAK1)*RATE2; //工资在300-450美元之间时的税金计算方法
        else
            tax=TAX_BASE1+TAX_BASE2+(salary-BREAK2)*RATE3; //工资大于450美元时的税金计算方法
        income=salary-tax; //净收入=薪资总额-税金
                printf("The total wage is： $%5.2f;and the tax is： $%5.2f；so the income： $%5.2f\n",salary,tax,income);
    }
    printf("Bye!\n");

    return 0;
}
