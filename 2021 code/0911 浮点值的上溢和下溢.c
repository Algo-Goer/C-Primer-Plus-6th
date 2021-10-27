//showf_pt.c--以两种方式显示float类型的值
#include <stdio.h>
int main(void) 
{
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);
    return 0;
}