#include <stdio.h>

int BinarySearch(int arr[], int size, int target);

int main(void)
{
  int arr[11] = {0,1,2,3,4,5,6,7,8,9,10};

  int query;

  printf("[~] Enter the query value-> \n");

  scanf("%i", &query);

  int x = BinarySearch(arr, 11, query);

  if(x != -1)
  {
    printf("[*] Value %i located at index-> %i \n", query, x);
  }
  else
  {
    printf("[!] Value not located \n");
  }

  return 0;

}

int BinarySearch(int arr[], int size, int target)
{
  int low;
  int mid;
  int high;

  low = 0;
  high = size-1;

  while(low<=high)
  {
    mid = low + (high-low)/2;

    if(arr[mid] == target)
    {
      return mid;
    }
    else if(arr[mid] < target)
    {
      low = mid+1;
    }
    else
    {
      high = mid-1;
    }
  }
  return -1;
}
