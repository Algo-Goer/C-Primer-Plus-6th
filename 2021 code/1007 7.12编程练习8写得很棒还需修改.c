#include <stdio.h>
#define BASE1 8.75f
#define BASE2 9.33f
#define BASE3 10.00f
#define BASE4 11.20f
#define OVERTIME 1.5f
#define RATE 0.15f
#define RATE2 0.20f
#define RATE3 0.25f
int main(void)
{
    float base, hours, wages, tax, netwages, overload, newhours;
    int number;
    printf("*************************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1)$8.75/hr                   2)$9.33/hr\n");
    printf("3)$10.00/hr                  4)$11.20/hr\n");
    printf("5)quit\n");
    printf("*************************************************************************\n");
    
    while (scanf("%d", &number) == 1) 
    {
      if (number == 1 || number == 2 || number == 3 || number == 4)
      {
        switch(number)
        {
          case 1: base = BASE1;
                    break;
          case 2: base = BASE2;
                    break;
          case 3: base = BASE3;
                    break;
          case 4: base = BASE4;
                    break;
        }
        printf("Please enter working hours per hour:\n");
        scanf("%f", &hours);
        if (hours <= 40)
        {
          wages = hours * base;
          if (wages <= 300)
          {
            netwages = wages * (1 - RATE);
            tax = wages * RATE;
          }
          else if (wages > 300 && wages <= 400)
          {
            tax = 300 * RATE + (wages - 300) * RATE2;
            netwages = wages - tax;
          }
        }
        else if (hours > 40)
        {
          overload = hours - 40;
          newhours = 40 + overload * 1.5;
          wages = newhours * base;
          if (wages > 300 && wages < 450)
          {
            tax = 300 * RATE + (wages - 300) * RATE2;
            netwages = wages - tax;
          }
          else if (wages >= 450)
          {
            tax = 300 * RATE + 150 * RATE2 + (wages - 450) * RATE3;
            netwages = wages - tax;
          }
        }
        printf("wages:%5.2f\ntax:%5.2f\nnetwages:%5.2f\n", wages, tax, netwages);
        continue;
      } 
      else if (number == 5)
      {
        printf("quit.\n");  
        break;
      }
      else
      {
        printf("Enter the number only in the range of 1~5 rather than others:\n");
        continue;
      }
    }
    printf("Bye!\n");
    return 0;  
}