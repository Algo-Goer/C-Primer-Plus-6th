/* Programming Exercise 10-3 */ 
#include <stdio.h>
#define LEN 10

int max_arr(const int ar[], int n); 
void show_arr(const int ar[], int n);

int main(void) 
{   
	int orig[LEN] = {1,2,3,4,12,6,7,8,9,10}; //��������    
	int max; 
    
	show_arr(orig, LEN);  //��ʾ������������   
	max = max_arr(orig, LEN);  //�����������ֵ   
	printf("%d = largest value\n", max);          
	return 0; 
} 
int max_arr(const int ar[], int n) 
{     
	int i;     
	int max = ar[0];   //�������ֵΪ�����һ��Ԫ��         
	for (i = 1; i < n; i++)         
		if (max < ar[i])             
			max = ar[i];     
	return max; 
} 
 void show_arr(const int ar[], int n) //��ʾ���� 
{   
	int i;          
	for (i = 0; i < n; i++)         
		printf("%d ", ar[i]);     
	putchar('\n'); 
}
