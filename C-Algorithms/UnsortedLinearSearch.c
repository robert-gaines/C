#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Unsorted Linear Search */

int linearSearch(int arr[], int size, int value)
{
  for(int i = 0; i < size; i++)
  {
    if(value == arr[i])
    {
      return i;
    }
  }
  return -1;
}

int main(void)
{
  srand(time(NULL));

  int arr[10];

  int r;

  for(int i = 0; i < 10; i++)
  {
    r = random() % 10;
    printf("[+] Adding %i \n ", r);
    arr[i] = r;
  }

  int q;

  printf("[~] Enter an integer query value-> \n");

  scanf("%i", &q);

  printf("[*] Searching the data set... \n");

  int v = linearSearch(arr, 10, q);

  if(v == -1)
  {
    printf("[!]Value not found \n");
  }
  else
  {
    printf("[~]Value located at index: [%i] \n", v);
  }

  return 0;
}
