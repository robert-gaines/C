#include <stdio.h>

int main(void)
{
  int a;
  int* b;

  a = 42;
  b = &a;

  printf("[*] The variable contains: %i \n", a);

  printf("[*] The variable is stored at: %p \n", b);

  return 0;

}
