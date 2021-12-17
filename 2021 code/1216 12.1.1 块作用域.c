double blocky(double cleo)
{
    double patrick = 0.0;
    int i;
    for (i = 0; i < 10; i++)
    {
        double q = cleo * i; // q的作用域开始
        ...
        patrick *= q; 
    }    // q的作用域结束
    ...
    return patrick;
}
/* 
对于for的循环头，C99放宽后可以这样写：
for (int i = 0; i < 10; i++)
   printf("A C99 feature: i = %d", i);
具有块作用域的变量不一定必须声明在块开头了
*/