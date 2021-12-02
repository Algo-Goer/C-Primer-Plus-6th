/* Programming Exercise 10-4 */ 
#include <stdio.h>
#define LEN 10

int max_arr(const double ar[], int n); 
void show_arr(const double ar[], int n);

int main(void) 
{   
	double orig[LEN] = {1.0,2.0,3.0,4.0,12.0,6.0,7.0,8.0,9.0,10.0}; //测试数组    
	int j; 
    
	show_arr(orig, LEN);  //显示测试数组内容   
	j = max_arr(orig, LEN);  //求数组中最大值的下标  
	printf("%d = largest value index\n", j);          
	return 0; 
} 
int max_arr(const double ar[], int n) 
{     
	int i;
	int j = 0;  //记录数组第一个元素的下标 
	     
	double max = ar[0];   //先令最大值为数组第一个元素         
	for (i = 1; i < n; i++)         
		if (max < ar[i])             
		{
			max = ar[i]; //记录较大值 
			j = i;	//记录较大值的下标 
		}    
	return j; 
} 
 void show_arr(const double ar[], int n) //显示数组 
{   
	int i;          
	for (i = 0; i < n; i++)         
		printf("%f\t", ar[i]);     
	putchar('\n'); 
}
