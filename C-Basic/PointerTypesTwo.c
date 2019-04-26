#include <stdio.h>

int main()
{
  printf("[*] Demonstrates incompatible points/dat type assignment ");

  char char_array[5] = {'a','b','c','d','e'};

  int int_array[5] = {1,2,3,4,5};

  char *char_pointer;

  int *int_pointer;

  char_pointer = int_array;

  int_pointer = char_array;

  for(int i = 0; i < 5; i++)
  {
    printf("[*] Integer pointer points to: %p, which contains the char '%c' \n", int_pointer, *int_pointer);
    int_pointer = int_pointer+1;
  }

  for(int i = 0; i < 5; i++)
  {
    printf("[*] CHar pointer points to %p, which contains the integer %d\n", char_pointer, *char_pointer);
    char_pointer = char_pointer+1;
  }
}
