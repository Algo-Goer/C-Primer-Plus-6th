/*编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续的。
或者使用ctype.h库中合适的分类函数更方便。
*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int count_up = 0;
	int count_lo = 0;
	while ((ch = getchar()) != EOF) {
		if (isupper(ch))
			count_up++;
		if (islower(ch))
			count_lo++;
	}
	printf("大写字母个数为%d，小写字母个数为%d", count_up, count_lo);
	return 0;
}
