#include <stdio.h>
void print(int *u, int *v);
int main (void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    print(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
void print(int *u, int *v)
{
    if (*u > *v)
        *v = *u;
    else *u = *v;
}