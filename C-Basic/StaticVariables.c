#include <stdio.h>

void function()
{
  int var = 5;

  static int static_var = 5;

  printf("\t[*] In the function, var is: %d\n", var);

  printf("\t[*] In the function, static variable var is: %d\n", static_var);

  var++;

  static_var++;
}

int main()
{
  int i;

  static int static_var = 1337;

  for(i=0;i<5;i++)
  {
    printf("[*] Static Variable -> %d\n", static_var);
    function();
  }
}
