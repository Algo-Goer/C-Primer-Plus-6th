int Errupt;       // 外部定义的变量
double Up[100];   // 外部定义的数组
extern char Coal; // 如果Coal被定义在另一个文件，则必须这样声明

void next(void);
int main(void)
{
    extern int Errupt; // 可选的声明

    extern double Up[]; // 可选的声明，不用指明数组大小
    ...
}
void next(void)
{
    ...
}