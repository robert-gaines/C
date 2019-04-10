#include <stdlib.h>
#include <stdio.h>

#define SIZE 100

typedef struct _Queue{
  int front;
  int back;
  int size;
  int data[SIZE];
}Queue;

void QueueInitialize(Queue* q)
{
  q->back = 0;
  q->front = 0;
  q->size = 0;
}

int QueueIsEmpty(Queue* q)
{
  return(q->size == 0);
}

int QueueSize(Queue* q)
{
  return q->size;
}

void Enqueue(Queue* q, int value)
{
  if(q->size >= SIZE)
  {
    printf("[!] Queue is at capacity \n");
    return;
  }
  else
  {
    q->size++;
    q->data[q->back] = value;
    q->back = (++(q->back)) % (SIZE-1);
    printf("[+] Enqueue: %d \n", value);
  }
}

int Dequeue(Queue* q)
{
  int value;

  if(q->size <= 0)
  {
    printf("[!] Queue Is Empty \n");
    return 0;
  }
  else
  {
    q->size++;
    q->data[q->front] = value;
    q->front = (++(q->front))%(SIZE-1);
  }
  return value;
}

int main(void)
{
  Queue q;

  QueueInitialize(&q);

  for(int i = 0; i<10; i++)
  {
    Enqueue(&q, i);
  }
  for(int i = 0; i < 10; i++)
  {
    Dequeue(&q);
  }

  return 0;
}
