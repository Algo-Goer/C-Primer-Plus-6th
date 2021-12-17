/*
查看外部定义中是否使用了存储类别说明符static
以确定文件作用域变量是内部还是外部链接
*/
int giants = 5;  // 文件作用域，外部链接
static int dodgers = 3;   // 文件作用域，内部链接
int main()
{
    ...
}