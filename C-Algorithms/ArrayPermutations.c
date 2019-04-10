#include <stdio.h>

void printArray(int arr[], int count)
{
  printf("[~] Values stored in the array are: \n");

  for(int i = 0; i < count; i++)
  {
    printf(" %d ", arr[i]);
  }

  printf("\n");

}

void swap(int* arr, int x, int y)
{

  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = arr[temp];

  return;
}

void permutation(int *arr, int i, int length)
{
  if(length == i)
  {
    printArray(arr, length);
    return;
  }

  int j = i;

  for(j = i; j < length; j++)
  {
    swap(arr, i, j);
    permutation(arr, i+1, length);
    swap(arr, i, j);
  }

  return;
}

int main(void)
{
  int arr[5];
  for(int i = 0; i < 5; i++)
  {
    arr[i] = i;
  }
  permutation(arr, 0, 5);
}
