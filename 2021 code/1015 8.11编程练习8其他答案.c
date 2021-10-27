/*
    编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。获得用户选择的选项后，程序提示
    用户输入两个数字，然后执行用户刚才选择的操作。该程序只能接受菜单提供的选项。程序使用
    float类型的变量存储用户输入的数字，如果用户输入失败，则允许再次输入。进行除法运算时，
    如果用户输入0作为第2个数（除数），程序应提示用户重新输入一个新值。
*/

#include <stdio.h>
#include <ctype.h>
char get_choice(void);  //  （返回标签选项a\s\m\d\q）并且打印图形交互界面
char get_first(void);   //  (返回第一个非空白字符)读取字符，并丢弃剩余的字符
float get_float(void);  //  （返回读入一个float类型）读入一个float类型并判断排除非数字类型
void add(void);         //  加法
void subtract(void);    //  减法
void multiply(void);    //  乘法
void divide(void);      //  除法

int main(int argc, char const *argv[])
{
    char ch;


    while ( (ch = get_choice()) != 'q' )
    {
        switch ( ch )
        {
            case 'a':   add();
                        break;
            case 's':   subtract();
                        break;
            case 'm':   multiply();
                        break;
            case 'd':   divide();
                        break;
            default:    printf("对不起，程序出现故障！");
                        break;
        }
    }
    printf("Bye.\n");
    
    return 0;
}

char get_choice(void)
{
    char ch;
    
    printf("Enter the operation of your choice:\n");
    printf("a. add          s. subtract\n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");

    ch = get_first();
    while ( (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd') && ch != 'q' ) 
    {
        printf("Please respond with a, s, m, d, or q.\n");
        ch = get_first();
    }
    
    return ch;
}

char get_first(void)
{
    int ch;

    while ( (ch = getchar()) != EOF )   //不断循环直到判断出非空白字符
    {
        if ( !isspace(ch) )             //  判断非空白字符
        {
            while ( getchar() != '\n' ) //将非空白字符后的所有字符跳过
            {
                continue;
            }
            break;
        }
    }

    return ch;
}

void add(void)
{
    float n1, n2;
    printf("Enter first number:");
    n1 = get_float();
    printf("Enter second number:");
    n2 = get_float();
    printf("%.1f + %.1f = %.1f\n", n1, n2, n1 + n2);
 
}

void subtract(void)
{
    float n1, n2;
    printf("Enter first number:");
    n1 = get_float();
    printf("Enter second number:");
    n2 = get_float();
    printf("%.1f - %.1f = %.1f\n", n1, n2, n1 - n2);
}

void divide(void)
{
    float n1, n2;
    printf("Enter first number:");
    n1 = get_float();
    printf("Enter second number:");
    n2 = get_float();
    while ( n2 == 0 )
    {
        printf("Enter a number otuer than 0: ");
        n2 = get_float();
    } 
    printf("%.1f / %.1f = %.1f\n", n1, n2, n1 / n2);
}

void multiply(void)
{
    float n1, n2;
    printf("Enter first number:");
    n1 = get_float();
    printf("Enter second number:");
    n2 = get_float();
    printf("%.1f * %.1f = %.1f\n", n1, n2, n1 * n2);
}


float get_float(void)
{
    float f;
    char ch;

    while ( scanf("%f", &f) != 1 )  //这里还剩下一个换行符；【如果读取的是一个非数字，则进入循环】
    {
        while ( (ch = getchar()) != '\n')   //  打印读入错误的字符，并跳过
        {
            putchar(ch);
        }
        printf(" is not an number.\n");
        printf("Please enter a number , such as 2.5, -1.78E8, or 3:" );
    }

    while ( getchar() != '\n')  //  跳过第一个外层while的一个换行符。
    {
        continue;
    }

    return f;
}

