// strlen()����һ��ָ���ַ�����ָ����Ϊ�����������ظ��ַ�������
// ���ÿ⺯��strlen()����Ҫstring.h�����Զ���strlen

int strlen(const char *s)
{
  int ct = 0;
  while (*s++) // ����while(*s++ != '\0')
    ct++;
  return (ct);
}

/* 
��д�ģ����ڻ��޷��ж϶Բ���
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