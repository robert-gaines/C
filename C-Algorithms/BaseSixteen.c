#include <stdio.h>

void printInt(unsigned int number, const int base)
{
  char* conversion = "0123456789ABCDEF";

  char digit = number % base;

  if(number /= base)
  {
    printInt(number, base);
  }
  printf("%c", conversion[digit]);
}

int main(void)
{
  unsigned int i;
  const int base = 16;

  printf("[~] Enter an integer value-> \n");

  scanf("%i", &i);

  printInt(i, base);

  printf("\n");

  return 0;
}
