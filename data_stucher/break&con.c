#include <stdio.h>
int main()
{
  int i,x = 10;
  for (i = 0; i < x; i++) {
    if (i==5) {
      break;
      printf("%d\n",x);
    }
  }
  return 0;
}
