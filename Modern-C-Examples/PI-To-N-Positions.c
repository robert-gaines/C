#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
  int pos;

  if(argv[1])
  {
    pos = atoi(argv[1]);
  }
  else
  {
    puts("failed to specify n position");
  }

  float pi = 22 / 7.00;

  /* User the * to use a variable as the length specifier */

  printf("%.*f",pos,pi);

  return 0;
}
