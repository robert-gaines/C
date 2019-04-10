#include <stdio.h>

void PrintArrayAddress(int arr[], int count);

int main(void)
{
  int arr[9] = {1,2,3,4,5,6,7,8};

  PrintArrayAddress(arr, 9);

  return 0;
}

void PrintArrayAddress(int arr[], int count)
{
  printf("Values stored in the array are as follows: \n");

  for(int i = 0; i < count; i++)
  {
    printf("[*] Data [%d] has Address: [%p] \n", arr[i], arr+i);
  }
}
