#include <stdio.h>

int main()
{
  int celsius;
  int fahrenheit;

  printf("Enter the degree value in Celsius: ");
  scanf("%d", &celsius);
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("The degree value in Fahrenheit is: %d\n", fahrenheit);

  if (fahrenheit > 32)
  {
    printf("The temperature is above freezing.\n");
  }
  else if (fahrenheit == 32)
  {
    printf("The temperature is at freezing point.\n");
  }
  else
  {
    printf("The temperature is below freezing.\n");
  }

  return 0;
}
