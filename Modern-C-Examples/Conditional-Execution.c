#include <stdlib.h>
#include <stdio.h>

int main()
{
  int arr[10] = {
    [0] = 1,
    [1] = 2,
    [2] = 3,
    [3] = 4,
    [4] = 5,
    [6] = 6,
    [7] = 7,
    [8] = 8,
    [9] = 9,
  };

  for(int i = 0; i < 10; i++)
  {
    printf("Current element is: %i \n",arr[i]);

    if((arr[i] % 2) == 0)
    {
      printf("Element %i is even \n",arr[i]);
    }
    else
    {
      printf("Element %i is odd \n",arr[i]);
    }
  }

  return 0;
}
