#include <stdio.h>

int main()
{
    int IntegerVariable = 2;
    //
    int *IntegerVariablePointer;
    //
    IntegerVariablePointer = &IntegerVariable;
    //
    printf("Integer Variable Pointer points to-> 0x%08x\n", IntegerVariablePointer);
    //
    printf("Integer Variable Pointer references-> 0x%08x\n", &IntegerVariablePointer);
    //
    printf("Integer Variable is at-> 0x%08x\n", &IntegerVariable);
    //
    printf("Integer Variable contains-> %d\n", IntegerVariable);
}
