#include <stdio.h>

void towerOfHanoi(int num, char src, char dst, char temp)
{
  if(num < 1)
  {
    return;
  }
  towerOfHanoi(num-1, src, temp, dst);
  printf("\n Move disk %d from peg %c to peg %c", num, src, dst);
  towerOfHanoi(num-1,temp, dst, src);
}

int main(void)
{
  int i = 4;

  printf("[~] Tower of Hanoi Demonstration [~]\n");

  towerOfHanoi(i, 'A','B','C');

  printf("\n");

  return 0;
}
