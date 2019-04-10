#include <stdlib.h>
#include <stdio.h>

#define MAX_HEIGHT 50

typedef struct stack{
  int top;
  int data[MAX_HEIGHT];
}Stack;

void StackInitialize(Stack* stk)
{
  stk->top = -1;
}

void StackPush(Stack* stk, int value)
{
  if(stk->top < MAX_HEIGHT-1)
  {
    stk->top++;
    stk->data[stk->top] = value;
    printf("[+] Value push: %d \n", value);
  }
  else
  {
    printf("[!] Stack Overflow \n");
  }
}

int StackPop(Stack* stk)
{
  if(stk->top >= 0)
  {
    int value = stk->data[stk->top]; /* Set value to stack top */
    stk->top--; /* Decrement Top */
    printf("[-] Value pop: %d \n", value);
    return value;
  }
  else
  {
    printf("[!] Stack is empty \n");
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
  Stack stk;

  StackInitialize(&stk);

  for(int i = 0; i < 5; i++)
  {
    StackPush(&stk, i);
  }

  printf("[*] Stack peek returns-> %d \n", StackPeek(&stk));

  int j = StackSize(&stk);

  while(j > 0)
  {
    StackPop(&stk);
    j--;
  }

  printf("[?] Stack Empty: %i \n", StackIsEmpty(&stk));

  return 0;
}
