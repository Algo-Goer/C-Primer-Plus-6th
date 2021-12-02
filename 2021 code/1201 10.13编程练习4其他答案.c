/* Programming Exercise 10-4 */ 
#include <stdio.h>
#define LEN 10

int max_arr(const double ar[], int n); 
void show_arr(const double ar[], int n);

int main(void) 
{   
	double orig[LEN] = {1.0,2.0,3.0,4.0,12.0,6.0,7.0,8.0,9.0,10.0}; //��������    
	int j; 
    
	show_arr(orig, LEN);  //��ʾ������������   
	j = max_arr(orig, LEN);  //�����������ֵ���±�  
	printf("%d = largest value index\n", j);          
	return 0; 
} 
int max_arr(const double ar[], int n) 
{     
	int i;
	int j = 0;  //��¼�����һ��Ԫ�ص��±� 
	     
	double max = ar[0];   //�������ֵΪ�����һ��Ԫ��         
	for (i = 1; i < n; i++)         
		if (max < ar[i])             
		{
			max = ar[i]; //��¼�ϴ�ֵ 
			j = i;	//��¼�ϴ�ֵ���±� 
		}    
	return j; 
} 
 void show_arr(const double ar[], int n) //��ʾ���� 
{   
	int i;          
	for (i = 0; i < n; i++)         
		printf("%f\t", ar[i]);     
	putchar('\n'); 
}
