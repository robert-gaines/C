#include <stdlib.h>
#include <stdio.h>

int findKeyCount(int arr[], int size, int key)
{
  int count = 0;

  for(int i = 0; i < size; i++)
  {
    if(arr[i] == key)
    {
      count++;
    }
  }
  return count;
}

int main(void)
{
  int arr[10] = {1,1,2,2,2,3,4,5,6,7};

  int c = findKeyCount(arr,10,2);

  printf("[*] 2 Occurs %i times in the array\n", c);

  return 0;
}
