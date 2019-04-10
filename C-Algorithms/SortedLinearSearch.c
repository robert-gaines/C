#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* Unsorted Linear Search */

int randGen(void)
{
  srand(time(NULL));

  int r = random() % 10;

  return r;
}

int linearSearch(int arr[], int size, int value)
{

  int i = 0;

  for(i = 0; i < size; i++)
  {
    if(value == arr[i])
    {
      return i;
    }
    else if(value < arr[i])
    {
      return -1;
    }
  }

  return -1;

}

int main(void)
{
  int arr[10] = {0,1,2,3,4,5,6,7,8,9};

  printf("---\n");

  for(int i = 0; i<10; i++)
  {
    printf("%i\n", arr[i]);
  }

  int q;

  printf("[~] Enter an integer search value-> \n");

  scanf("%i", &q);

  printf("[~] Searching... \n");

  int v = linearSearch(arr, 10, q);

  if(v != -1)
  {
    printf("[*] Value located at index-> [%i] \n", v);
    return 0;
  }
  else
  {
    printf("[!] Value not located \n");
  }

  return 0;

}
