#include <stdio.h>
#include <stdlib.h>

int GlobalVar;

int GlobalIntializedVar = 42;

void function()
{
  int StackVariable;
  //
  printf("[*] The function's Stack Variable address is at: 0x%08x\n", &StackVariable);
}

int main()
{
  int StackVariable;
  static int StaticInitializedVariable = 2;
  static int StaticVariable;
  int *HeapVariablePointer;

  HeapVariablePointer = (int *)malloc(4);

  printf("[*] Following variables are in the data segment...\n");
  //
  printf("[*] Global initialized variable is at address: 0x%08x\n", &GlobalIntializedVar);
  //
  printf("[*] Static intialized variable is at address: 0x%08x\n\n", &StaticInitializedVariable);
  //
  printf("[*] The following variables are in the BSS segment...\n");
  //
  printf("[*] Static variable is at address: 0x%08x\n", &StaticVariable);
  //
  printf("[*] Global variable is at address: 0x%08x\n\n", &GlobalVar);
  //
  printf("[*] The following variable is at the heap segment...\n");
  //
  printf("[*] The Heap Variable is at address: 0x%08x\n\n", HeapVariablePointer);
  //
  printf("[*] The following variable is in the stack segment...");
  //
  printf("[*] The Stack Variable is at address: 0x%08x\n", &StackVariable);
  //
  function();
}
