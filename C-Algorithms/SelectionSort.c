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

void SelectionSort(int* arr, int size)
{
  int i, j;
  int max, tmp;

  for(i = 0; i < size-1; i++)
  {
    max=0;
    for(j=1; j<size-1-i; j++)
    {
      if(arr[j] > arr[max])
      {
        max = j;
      }
      tmp = arr[size-1-i];
      arr[size-1-i] = arr[max];
      arr[max] = tmp;
    }
  }
}

int main(void)
{
  printf("[~] Selection Sort Module [~]");

  printf("\n");

  printf("[+] Generating An Array with Random Integers \n");

  int arr[50];

  for(int i = 0; i < 50; i++){ arr[i] = randGen(); }

  printf("[*] Original Array Values: \n");

  for(int i = 0; i < 50; i++){ printf("%d ", arr[i]); }

  printf("\n");

  printf("[*] Sorted Array Values: \n");

  SelectionSort(arr, 50);

  for(int i = 0; i < 50; i++){ printf("%d ", arr[i]); }

  printf("\n");

  return 0;
}
