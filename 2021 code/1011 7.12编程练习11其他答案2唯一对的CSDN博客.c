#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<windows.h> 
#include <math.h>
 
void Ex11()
{
	//定义单价
	const float artichoke = 2.05f;	//洋蓟
	const float beet = 1.15f;		//甜菜
	const float carrot = 1.09f;		//萝卜
 
	//品种小计总价
	float price_artichoke = 0;	//洋蓟
	float price_beet = 0;		//甜菜
	float price_carrot = 0;		//萝卜
 
	//品种小计重量
	float weight_artichoke = 0;	//洋蓟
	float weight_beet = 0;		//甜菜
	float weight_carrot = 0;	//萝卜
 
	//购买的重量
	float amount;
 
 
	//产生的数据
	float totleweight = 0.0;	//总重
	float totalprice = 0.0;		//总价
	float payment = 0.0;		//最后结算金额
	float totaldiscount = 0.0;	//总折扣
	float freight = 0.0;		//运费包装费
 
 
	char type = 0; // 购买种类
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	printf("\t\tABC邮购杂货店 欢迎光临\n");
	printf("商品列表：\n");
	printf("洋蓟\t单价:%.2f元/斤\n", artichoke);
	printf("甜菜\t单价:%.2f元/斤\n", beet);
	printf("萝卜\t单价:%.2f元/斤\n", carrot);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	
	while (1)
	{
		printf("\n请输入你要购买的产品：[ a=洋蓟 b=甜菜 c=萝卜 q=结算/退出]：");
		//scanf("%c",&type);
		type = getchar();
		switch (type)
		{
		case 'a':
		case 'A'://洋蓟
			printf("请输入你要购买");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("洋蓟");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
			printf("的重量（磅）：");
			scanf("%f", &amount);
			weight_artichoke += amount;
			price_artichoke += amount * artichoke;
			break;
		case 'b':
		case 'B'://甜菜
			printf("请输入你要购买");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("甜菜");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
			printf("的重量（磅）：");
			scanf("%f", &amount);
			weight_beet += amount;
			price_beet += amount * beet;
			break;
		case 'c':
		case 'C'://萝卜
			printf("请输入你要购买");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			printf("萝卜");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
			printf("的重量（磅）：");
			scanf("%f", &amount);
			weight_carrot += amount;
			price_carrot += amount * carrot;
			break;
		case 'q':
		case 'Q'://退出
			//结算数据：
 
			//总重量：
			totleweight = weight_artichoke + weight_beet + weight_carrot;
			//小计购买金额
			totalprice = price_artichoke + price_beet + price_carrot;
 
			//少于5磅，收6.5元的运费和包装费;
			if (totleweight <= 5) freight += 6.5;
			if (totleweight > 5 && totleweight <= 20) freight += 14;
			//大于20磅，每续重1磅就增加0.5元
			if (totleweight > 20) 
			{
				freight += 14;
				freight += (float)(round(totleweight - 20) * 0.5); //需要四舍五入;
			}
			//100美元有5%的优惠;
			if (totalprice >= 100) totaldiscount = (float)(totalprice*0.05);
 
			//最后得出应付总金额
			payment = totalprice + freight - totaldiscount;  
 
			printf("\n结算数据如下：\n");
			printf("\t商品名\t单价\t重量\t小计金额\n");
			printf("----------------------------------------------------------\n");
			if (weight_artichoke>0) printf("\t洋蓟\t%.2f\t%.2f\t%.2f\n", artichoke, weight_artichoke, price_artichoke);
			if (weight_beet>0) printf("\t甜菜\t%.2f\t%.2f\t%.2f\n", beet, weight_beet, price_beet);
			if (weight_carrot>0) printf("\t萝卜\t%.2f\t%.2f\t%.2f\n", carrot, weight_carrot, price_carrot);
			printf("-----------------------------------------------------------\n");
			printf("\t小计\t\t%.2f\t%.2f\n", totleweight, totalprice);
			printf("购买总金额：%.2f\n",totalprice);
			printf("包装费运费：%.2f\n",freight);
			printf("折扣：%.2f\n",totaldiscount);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("总金额：%.2f\n", payment);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
 
			printf("\n欢迎再次光临！\n");
			system("pause");
			return; //退出；
		default:
			printf("你购买的商品不存在，请重新输入。\n");
		}
		fflush(stdin); //清缓存
	}
}
 
int main()
{
	Ex11();
	return 0;
}