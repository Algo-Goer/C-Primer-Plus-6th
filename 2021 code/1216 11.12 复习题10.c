// strlen()接受一个指向字符串的指针作为参数，并返回该字符串长度
// 不用库函数strlen()（需要string.h），自定义strlen

int strlen(const char *s)
{
  int ct = 0;
  while (*s++) // 或者while(*s++ != '\0')
    ct++;
  return (ct);
}

/* 
我写的，现在还无法判断对不对
int strlen(const char str[])
{
    char *ptr;
    ptr = str;
    int count = 0;
    while (*ptr != '\0')
      count++;
    return count;
}
*/