#include <stdio.h>

char* intToStr(char *p, unsigned int number)
{
  char digit = number % 10 + '0';

  if(number /= 10)
  {
    p = intToStr(p, number);
  }

  *p++ = digit;

  return(p);
}

int main(void)
{
  int i;

  printf("[~] Enter an integer-> \n");

  scanf("%i", &i);

  char *c;

  intToStr(c,i);

  printf("[*] Value as a string-> %s \n", c);

  return 0;
}
