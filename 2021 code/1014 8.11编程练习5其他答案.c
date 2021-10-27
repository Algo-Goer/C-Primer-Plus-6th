/*
5.修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序
最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一
次猜测的值应是50和100中值，也就是75。如果这次猜大了，那么下一次猜
测的值应是50和75的中值，等等。使用二分查找（binary search）策略，如
果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
*/

#include<stdio.h>

char getfirst(void);

int main(void)
{
	int guess=50,max=100,min=0;
	char ch;
	printf("1到100的数字在心理默念一个，让我来猜猜看。\n如果我猜对了就按y,猜小了按a,猜大了按b\n\n");
	printf("你心里的数字是%d吗?\n",guess);
	while((ch=getfirst())!='y')
	{
		switch(ch)
		{
			case 'a':
				min=guess;
				guess=guess+(max-guess)/2;
				printf("你心里的数字是%d吗?\n",guess);
				break;
			case 'b':
				max=guess;
				guess=guess-(guess-min)/2;
				printf("你心里的数字是%d吗?\n",guess);
				break;
			default:
				printf("输入了错误的选项，请重新输入！\n");
				break;
		}
	}
	printf("我就知道我能猜到！\n");
	return 0; 	
} 
char getfirst(void)     //只读取首字母 
{
	char first;
	first=getchar();
	while(getchar()!='\n')
	continue;
	return first;
}
