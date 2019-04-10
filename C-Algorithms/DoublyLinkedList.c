#include <stdlib.h>
#include <stdio.h>

struct Node{
  int value;
  struct Node *next;
  struct Node *prev;
};

typedef Node* NodePtr;

/* Insert Value At Head */

int insertNode(NodePtr* ptrHead, NodePtr* ptrTail, int value)
{
  printf("[+] Inserting Node w/ Value-> %d \n", value);

  NodePtr temp = (NodePtr)malloc(sizeof(Node));

  if(!temp)
  {
    return 0;
  }

  NodePtr head = *ptrHead;

  if(!head)
  {
    temp->value = value;
    temp->next = NULL;
    temp->prev = NULL;
    *ptrTail = temp;
    *ptrHead = temp;
  }
  else
  {
    temp->value = value;
    temp->next = NULL;
    temp->prev = head;
    temp->prev = NULL;
    head->prev = temp;
    *ptrHead = temp;
  }
  return 1;
}

/* Print the Doubly Linked List */

void PrintList(NodePtr head)
{
  printf("[*] List is... \n");

  while(head != NULL)
  {
    printf("[*] Value: %d \n ", head->value);
    head = head->next;
  }
}

int main()
{
  NodePtr head = NULL;
  NodePtr tail = NULL;

  for(int i = 0; i < 10; i++)
  {
    insertNode(&head, &tail, i);
  }

  PrintList(head);

  return 0;
}
