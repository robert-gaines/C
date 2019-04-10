#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randGen(void)
{
  srand(time(NULL));

  int r = random() % 10;

  return r;
}

int less(int valueOne, int valueTwo)
{
  return valueOne < valueTwo;
}

int more(int valueOne, int valueTwo)
{
  return valueOne > valueTwo;
}

void BubbleSort(int* arr, int size)
{
  int temp;

  for(int i = 0; i < (size-1); i++)
  {
    for(int j = 0; j < size-i-1; j++)
    {
      if(more(arr[j], arr[j+1]))
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main(void)
{
  printf("[~] Bubble Sort Module [~]");

  printf("\n");

  printf("[+] Generating An Array with Random Integers \n");

  int arr[20];

  for(int i = 0; i < 20; i++){ arr[i] = randGen(); }

  printf("[*] Original Array Values: \n");

  for(int i = 0; i < 20; i++){ printf("%d ", arr[i]); }

  printf("\n");

  printf("[*] Sorted Array Values: \n");

  BubbleSort(arr, 20);

  for(int i = 0; i < 20; i++){ printf("%d ", arr[i]); }

  printf("\n");

  return 0;
}
