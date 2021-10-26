/*
 * @Author: your name
 * @Date: 2021-10-19 23:41:22
 * @LastEditTime: 2021-10-19 23:41:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \.vscode\C\1019 9.11 编程练习 11其他答案.c
 */
/* 11 */
#include <stdio.h>
void Fibonacci(int i);
int main(void)
{
	int sum;
	printf("Enter the number:");
	while (scanf("%d",&sum) == 1)
	{
		Fibonacci(sum);
		putchar('\n');
		printf("again(q to quit):");
	}

	return 0;
}
void Fibonacci(int i)
{
	int x,y;
	int cont;			//cont 用来计数
	x = 1;
	y = 0;

	for(cont = 0; cont < i; cont ++)
	{
		x = x + y;
		y = x - y;
		printf("%d ",y);
	}
}


