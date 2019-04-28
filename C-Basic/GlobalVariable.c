#include <stdio.h>

int j = 42;

void functionOne()
{
  printf("[*] From function one, the global variable j is: %d\n",j);
}

int main()
{
  int j = 2;
  printf("[*] From main, local variable j is: %d\n",j);
  functionOne();
}
