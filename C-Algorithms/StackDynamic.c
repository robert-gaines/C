#include <stdlib.h>
#include <stdio.h>

typedef struct stack
{
  int top;
  int* data;
  int max;
}Stack;

void StackInitialize(Stack* stk, int size)
{
  stk->data = (int*)malloc(size * sizeof(int));
  stk->top = -1;
  stk->max = size;
}

void StackPush(Stack* stk, int value)
{
  if(stk->top < stk->max-1)
  {
    stk->top++;
    stk->data[stk->top] = value;
    printf("[+] Pushed: %d \n", value);
  }
  else
  {
    stk->max = stk->max * 2;
    stk->data = (int*)realloc(stk->data, stk->max*sizeof(int));
    printf("[*] Stack size doubled \n");
    StackPush(stk, value);
  }
}

int StackPop(Stack* stk)
{
  if(stk->top > 0)
  {
    int value = stk->data[stk->top];
    stk->top--;
    printf("[-]Value pop: %d \n", value);
    return value;
  }
  else
  {
    printf("[!] Stack Empty \n");
    return 0;
  }
}

int StackPeek(Stack* stk)
{
  int value = stk->data[stk->top];
  return value;
}

int StackIsEmpty(Stack* stk)
{
  return(stk->top == -1);
}

int StackSize(Stack* stk)
{
  return(stk->top+1);
}

int main(void)
{
  Stack s;
  StackInitialize(&s, 10);
  for(int i = 0; i < 20; i++)
  {
    StackPush(&s, i);
  }
  for(int i = 0; i < 20; i++)
  {
    StackPop(&s);
  }
  return 0;
}
