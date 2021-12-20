// 分配内存除了malloc()，还可以用calloc()，典型用法如下：
long * newmem;
newmem = (long *)calloc(100, sizeof(long));