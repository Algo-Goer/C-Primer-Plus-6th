//返回在数组5个元素中的最大值
#include<stdio.h>
int arr_max(int arr[], int n);
int main(void)
{
	int arr[5];
	int i = 0;
	int max;
	printf("Input five integers:");
	for (i = 0; i < 5; i++)
		scanf("%d,", &arr[i]);
	max = arr_max(arr, 5);
	printf("The maximum value in an array is: %d\n", max);
	return 0;
}
int arr_max(int arr[], int n)
{
	int result;
	int index;
	result = arr[0];
	for (index = 1; index< n; index++)
	{
		if (result < arr[index])
			result = arr[index];
	}
	return result;
}
