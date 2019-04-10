#include <stdio.h>

int fibonacci(int n)
{

  if(n <= 1)
  {
    return n;
  }

  return fibonacci(n-1) + fibonacci(n-2);
}

int main(void)
{
  printf("[~] Fibonacci Number Generator \n");

  int i;

  printf("[~] Enter an index sequence-> \n");

  scanf("%i", &i);

  int x = fibonacci(i);

  printf("[*] Number is -> %i \n", x);

  return 0;
}
