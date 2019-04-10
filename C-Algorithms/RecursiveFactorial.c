#include <stdio.h>

int factorial(unsigned int i)
{
  /* Termination Condition */
  if(i <= 1)
  {
    return 1;
  }

  /* Body With Expansion Statement */
  return i*factorial(i-1);
}

int main(void)
{
  int i;

  printf("[~] Enter an integer value-> \n");

  scanf("%i", &i);

  printf("[*] Processing the factorial for %i \n", i);

  int x = factorial(i);

  printf("[*] Factorial is-> %i \n", x);

  return 0;
}
