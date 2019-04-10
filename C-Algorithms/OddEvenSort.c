#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int randGen(void)
{
  srand(time(NULL));

  int r = random() % 10;

  return r;
}

void swap(int *first, int *second)
{
  int temp = *first;
  *first = *second;
  *second = temp;
}

void separate(int arr[], int size)
{
  int left = 0;
  int right = size-1;

  while(left < right)
  {
    if(arr[left] % 2 == 0)
    {
      left++;
    }
    else if(arr[right] % 2 == 1)
    {
      right--;
    }
    else
    {
      swap(&arr[left], &arr[right]);
      left++;
      right--;
    }
  }
}

int main(void)
{
  int arr[10];

  for(int i = 0; i < 10; i++) {arr[i] = randGen();}

  for(int j = 0; j < 10; j++) {printf("[*] %d \n", arr[j]);}

  printf("---");

  printf("\n");

  separate(arr,10);

  for(int j = 0; j < 10; j++) {printf("[*] %d \n", arr[j]);}

  return 0;
}
