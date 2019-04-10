#include <stdio.h>

int SumArray(int arr[],int size);

int main()
{
  int arr[100];

  for(int i = 0; i < 100; i++)
  {
    arr[i] = i;
  }

  int size = 100;

  int sum = SumArray(arr, size);

  printf("[*] Sum of 0-100 is: %d \n", sum);

  return 0;
}

int SumArray(int arr[], int size)
{

  int total, index;

  for(index = 0; index<size; index++)
  {
    total = total + arr[index];
  }

  return total;

}
