/*
下面3个示例（外部变量1-3）演示了外部和自动变量的一些使用情况。
示例1中有一个外部变量Hocus。该变量对main()和magic()均可见。
*/

/*
现在是示例2了。
*/
int Hocus; // 外部变量Hocus
int magic();
int main(void)
{
    extern int Hocus; // Hocus 之前已声明为外部变量
    ...
}
int magic()
{
    /*
      与示例1的区别是，这里删除了extern int Hocus;
      并未在该函数中声明Hocus，但是仍可使用该变量
     */
    ...
}
