#include <stdio.h>

int RecursiveBinarySearch(int arr[], int low, int high, int value)
{

  if(low > high)
  {
    return -1;
  }

  int mid = low + (high-low)/2;

  if(arr[mid] == value)
  {
    return mid;
  }
  else if(arr[mid] < value)
  {
    return RecursiveBinarySearch(arr, mid+1, high, value);
  }
  else
  {
    return RecursiveBinarySearch(arr, low, mid-1, value);
  }

}

int main(void)
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  printf("[~] Recursive Binary Search [~]\n");

  int q;

  printf("[~] Enter a search value-> \n");

  scanf("%i", &q);

  int r = RecursiveBinarySearch(arr,0,9,q);

  if(r == -1)
  {
    printf("[!] Value not located \n");
  }
  else
  {
    printf("[*] Value located at index -> [%i] \n", r);
  }
}
