#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randGen(void)
{
  srand(time(NULL));

  int r = random() % 10;

  return r;
}

void MinSum(int arr[], int size)
{
  if(size < 2)
  {
    printf("[!] Invalid Input\n");
    return;
  }

  int MinFirst = 0;
  int MinSecond = 0;

  int MinSum = abs(arr[0] + arr[1]);

  for(int i = 0; i < size; i++)
  {
    for(int r = i+1; r < size; r++)
    {
      int sum = abs(arr[i] + arr[r]);
      //
      if(sum < MinSum)
      {
        MinSum = sum;
        MinFirst = i;
        MinSecond = r;
      }
    }
  }
  printf("[*] Two elements with the minimum sum are %d and %d \n", arr[MinFirst], arr[MinSecond]);
}

int main(void)
{
  int arr[10];

  for(int i = 0; i < 10; i++)
  {
    arr[i] = randGen();
  }

  MinSum(arr, 10);

  return 0;
}
