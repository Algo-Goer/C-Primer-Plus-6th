/*设计一个函数chline(ch,i,j)，打印指定的字符j行i列。在一个简单的驱动程序中测试该函数。
*/
#include<stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int i;
	int j;
	printf("请输入打印字符：");
	scanf("%c", &ch);
	printf("请输入需要打印的行数：");
	scanf("%d", &i);
	printf("请输入需要打印的列数：");
	scanf("%d", &j);
	chline(ch, i, j);

	return 0;
}
void chline(char ch, int i, int j)
{
	int m;
	int n;
	for (m = 1; m <= i; m++)
	{
		for (n = 1; n <= j; n++)
		{
			printf("%c", ch);

		}
		printf("\n");
	}
	
}
