#include <stdio.h>

int GCD(int m, int n)
{
  if(m<n)
  {
    return(GCD(n,m));
  }
  if(m%n==0)
  {
    return(n);
  }
  return(GCD(n,m%n));
}

int main(void)
{
  int i,j;

  printf("[~] Enter two integer values-> \n");

  scanf("Value 1, Value 2: %i,%i", &i, &j);

  int gcd = GCD(i,j);

  printf("[*] GCD is-> %i \n", gcd);

  return 0;
}
