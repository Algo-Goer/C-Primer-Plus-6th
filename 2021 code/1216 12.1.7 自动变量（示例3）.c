/*
在示例3中，创建了4个独立变量。
main()中的Hocus变量默认是自动变量，属于main()私有。
magic()中的Hocus变量被显式声明为自动，只有magic()可用。
外部变量Hocus对main()和magic()均不可见，但是对该文件中未创建局部Hocus变量的其他函数可见。
最后，Pocus是外部变量，magic()可见，但是main()不可见，因为Pocus被声明在main()后面。
*/
int Hocus;
int magic();
int main(void)
{
    int Hocus;   // 声明Hocus，默认是自动变量，属于main()私有。
    ...
}
int Pocus; 
int magic()
{
    auto int Hocus; // 把局部变量Hocus显式声明为自动变量，只有magic()可用
    ...
}