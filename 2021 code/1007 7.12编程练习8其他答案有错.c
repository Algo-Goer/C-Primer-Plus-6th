/*
修改练习7的假设a,让程序可以给出一个供选择的工资等级菜单
使用 switch 完成工资等级的选择。
运行程序后，显示的菜单应该类似这样：
*******************************************************************************
Enter the number corresponding to the desired pay rate of action:
1) $8.75/hr                                             2) $9.33/hr
3) $10.00/hr	                                        4) $11.20/hr
5) quit
*******************************************************************************
如果选择一个1~4其中的一个数字，程序应该询问用户工作的小时数。
程序要通过循环运行，除非用户输入 5。
如果输入1~5 以外的数字，程序应该提醒用户输入正确的选项，
然后再重复显示菜单提示用户输入。
使用#define创建符号常量表示各工资等级和税率
*/
#include <stdio.h>
#define RateA 0.15
#define RateB 0.2
#define RateC 0.25
#define AddTimes 1.5

int main(){
     
	int i=2;
	float salary;
	float hours;
	float hour;
	float sum;
	float tax;
	float profit;
	
    do{
     
		printf("请选择您的工资等级（输入1-5）：\n");
		printf("*******************************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate of action:\n");
		printf("1) $8.75/hr                                             2) $9.33/hr\n");
		printf("3) $10.00/hr	                                        4) $11.20/hr\n");
		printf("5) quit\n");
		printf("*******************************************************************************\n");
		scanf("%d",&i);
		
		while(i<1||i>5){
     
			printf("请输入正确的选项！（例如：1、2、3、4、5）\n");
			scanf("%d",&i);
		}
    }while(i<1||i>5);
    
    while(i != 5){
     
		switch(i){
     
			case 1 :
				salary = 8.75;
				break;
			case 2 :
				salary = 9.33;
				break;
			case 3 :
				salary = 10.00;
				break;
			case 4 :
				salary = 11.20;	
		}
		printf("请输入您的工作时间：\n");
		scanf("%f",&hours);
		while(hours<0){
     
			printf("请输入有效的工作时间（工作时间大于0）！\n");
			printf("请重新输入您的工作时间：");
			scanf("%f",&hours); 
		}
		if(hours>0&&hours<=40){
     
			sum=salary*hours;
		} else{
     
			hour=(hours-40)*AddTimes+40;
			sum=salary*hour;
		}
		
		if(sum<=300){
     
			tax=sum*RateA;
		}else if(sum<=450){
     
			tax=(sum-300)*RateB+300*RateA;
		}else{
     
			tax=(sum-450)*RateC+(450-300)*RateB+300*RateA;
		}
		profit=sum-tax;
		
		printf("您的工作时间为：%f小时\n",hours);
		printf("您的基本工资为：$%f/hr\n",salary);
		printf("您的工资总额为：$%f\n",sum);
		printf("您的工资税费为：$%f\n",tax);
		printf("您的净收入为：$%f\n",profit);
		
		printf("您可以重新选择您的工资等级！\n");
		scanf("%d",&i);
    }
    
	printf("感谢您的使用！欢迎下次再来！\n");
	return 0;
}