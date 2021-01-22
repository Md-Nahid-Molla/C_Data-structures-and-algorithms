#include <stdio.h>
int main()
{
  int x[2][3] = {2,4,6,
                1,3,5};
  int y = x[1][1] + x[0][2];
  printf(" sum of 2d array : %d\n",y);
  return 0;
}
