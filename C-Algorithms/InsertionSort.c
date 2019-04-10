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

void InsertionSort(int *arr, int size)
{
  int temp;
  int j;

  for(int i = 1; i < size; i++)
  {
    temp = arr[i];
    for(j=i; j>0 && more(arr[j-1],temp); j--)
    {
      arr[j]=arr[j-1];
    }
    arr[j]=temp;
  }
}

int main(void)
{
  printf("[~] Insertion Sort Module [~]");

  printf("\n");

  printf("[+] Generating An Array with Random Integers \n");

  int arr[50];

  for(int i = 0; i < 50; i++){ arr[i] = randGen(); }

  printf("[*] Original Array Values: \n");

  for(int i = 0; i < 50; i++){ printf("%d ", arr[i]); }

  printf("\n");

  printf("[*] Sorted Array Values: \n");

  InsertionSort(arr, 50);

  for(int i = 0; i < 50; i++){ printf("%d ", arr[i]); }

  printf("\n");

  return 0;
}
