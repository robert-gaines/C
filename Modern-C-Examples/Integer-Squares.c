#include <stdlib.h>
#include <stdio.h>


int main(void)
{
  int arr[5] = {
    [0] = 2,
    [1] = 4,
    [2] = 6,
    [3] = 8,
  };

  for (size_t i = 0; i < 5; i++)
  {
    printf("Current array element %i is %i, \t its square is: %i\n ", i,arr[i],arr[i]*arr[i]);
  }

  return EXIT_SUCCESS;
}
