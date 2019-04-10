#include <stdio.h>

void IncrementValue(int a)
{
  a++;
}

void IncrementReference(int *a)
{
  (*a)++;
}

int main(void)
{
  int a;

  printf("[~] Enter an integer value-> \n");

  scanf("%i", &a);

  printf("[~] The value is-> %i \n", a);

  IncrementValue(a);

  printf("[~] The value is-> %i \n", a);

  IncrementReference(&a);

  printf("[~] The value is-> %i \n", a);

  return 0;
}
