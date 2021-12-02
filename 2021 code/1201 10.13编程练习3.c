#include <stdio.h>
#define LEN 6
int return_max(int array[], int n);
int main(void) 
{
    int array[LEN]; 
    int max;
    int i;
    printf("Please enter 6 integers: ");
    for(i = 0; i < LEN; i++)
       scanf("%d", &array[i]);
    max = return_max(array, 6);
    printf("The maximum number of the array is : %d\n", max);
    return 0;
}
int return_max(int array[], int n)
{
    int max;
    int index;
    max = array[0];
    for (index = 0; index < n; index++)
    {
        if (max < array[index])
          max = array[index];
    }
    return max;
}