#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int randGen(void)
{
  srand(time(NULL));

  int r = random() % 10;

  return r;
}

int TwoDimensionalSearch(int* arr[],int r,int c,int value)
{
  int row = 0;
  int column = c-1;

  while(row < r && column >= 0)
  {
    if(arr[row][column] == value)
    {
      return 1;
    }
    else if(arr[row][column] > value)
    {
      column--;
    }
    else
    {
      row++;
    }
  }
  return 0;
}

int main(void)
{
  int arr[5][5];

  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      arr[i][j] = randGen();
    }
  }

  int q;

  printf("[~] Enter an integer search value-> \n");

  scanf("%d", &q);

  printf("[+] Searching... \n");

  int v = TwoDimensionalSearch(**arr,4,4,q);

  if(v == 1)
  {
    printf("[*] Value located \n");
  }
  else
  {
    printf("[!] Value not found \n");
  }

  return 0;
}
