#include <stdio.h>

int main(void)
{
  float num;
  int choice;

  printf("1. Farenheit To Celcius\n2. Celcius To Farenheit");
  printf("\nEnter your Choice: ");
  scanf("%d", &choice);

  printf("Enter how many degrees you want for your choice: ");
  scanf("%f", &num);

  if(choice == 1) {
    printf("Celcius To Farenheit");
    
  }
}
