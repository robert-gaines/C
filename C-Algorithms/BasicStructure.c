#include <stdio.h>

struct coord
{
  int x;
  int y;
};

int main()
{
  struct coord point;

  point.x = 10;
  point.y = 10;

  printf("X Axis Coordinate Value is %d \n", point.x);
  printf("Y Axis Coordinate Value is %d \n", point.y);

  printf("Size of structure is %d bytes \n", sizeof(point));

  return 0;
}
