#include <stdio.h>

void division(int x) {
  int i;
  for (i = 1;i <= x;i++)
      if (x % i == 0) {
        printf(" x division by : %d\n",i);
      }
    }
int main()
{
  division(5);
  return 0;
}
