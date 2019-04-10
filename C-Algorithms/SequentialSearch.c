#include <stdio.h>

int SequentialSearch(int arr[], int size, int target);

int main(void)
{
  int arr[10] = {10,9,8,7,6,5,4,3,2,1};

  int target;

  printf("[~] Enter the search value-> \n");

  scanf("%i", &target);

  int query;

  query = SequentialSearch(arr, 11, target);

  if(query != -1)
  {
    printf("[*] Value %i found at index: [%i] \n", target, query);
  }
  else
  {
    printf("[!] Value Not Found \n");
  }

  return 0;

}

int SequentialSearch(int arr[], int size, int target)
{
  int i = 0;

  for(i = 0; i < size; i++)
  {
      if(target == arr[i])
      {
        return i;
      }
  }

  return -1;

}
