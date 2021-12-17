/* 
嵌套块
块中声明的变量仅限于该块及其包含的块使用
*/
int loop(int n)
{
    int m;  // m的作用域
    scanf("%d", &m);
    {
        int i;  // m和i的作用域
        for (i = m; i < n; i++)
          puts("i is local to a sub-block\n");
    }
    return m;  // m的作用域，i已经消失
}