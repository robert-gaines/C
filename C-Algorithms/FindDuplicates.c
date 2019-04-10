#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randGen(void)
{
  srand(time(NULL));

  int r = random() % 10;

  return r;
}

void printRepeating(int arr[], int size)
{
  int i,j;
  printf("[*] Repeating elements are: \n");
  printf("---------------------------\n");
  for(i = 0; i < size; i++)
  {
    for(j = i+1; j < size; j++)
    {
      if(arr[i] == arr[j])
      {
        printf(" %i ", arr[i]);
      }
    }
  }
  printf("\n");
}

int main(void)
{
  int arr[10];

  for(int i = 0; i < 10; i++)
  {
    arr[i] = randGen();
    printf("[+] Added: %i \n", arr[i]);
  }

  printRepeating(arr, 10);

  return 0;
}
