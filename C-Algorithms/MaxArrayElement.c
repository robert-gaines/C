#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randGen(void)
{
  srand(time(NULL));

  int r = random() % 10;

  return r;
}

int FindMax(int arr[], int size)
{
  int max = arr[0];
  int count = 1;
  int maxCount =1;

  for(int i = 0; i < size; i++)
  {
    count = 1;
    for(int j = i+1; j < size; j++)
    {
      if(arr[i] == arr[j])
      {
        count++;
      }
    }
    if(count > maxCount)
    {
      max = arr[i];
      maxCount = count;
    }
  }
  return max;
}

int main(void)
{
  int arr[25];

  for(int i = 0; i < 25; i++)
  {
    arr[i] = randGen();
    printf("%i \n", arr[i]);
  }

  int x = FindMax(arr, 25);

  printf("[*] Max value is: %i \n", x);

  return 0;
}
