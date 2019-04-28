#include <stdio.h>

void functionOne()
{
  int i = 1;
  printf("\t\t\t[*] In function one, i is: %d\n",i);
}

void functionTwo()
{
  int i = 2;
  printf("\t\t\t[*] In function two, i is: %d\n",i);
}

void functionThree()
{
  int i = 3;
  printf("\t\t\t[*] In function three, i is: %d\n",i);
}

int main()
{
  int i = 4;
  printf("\t\t\t[*] In main, i is: %d\n", i);
  functionOne();
  functionTwo();
  functionThree();
}
