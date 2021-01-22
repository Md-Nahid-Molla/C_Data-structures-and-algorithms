#include <stdio.h>

int n(int x){
  if(x % 2 == 0)
    printf("Even number : %d\n",x);
  else
    printf("Odd number : %d\n",x);
}
int main()
{
  n(17);
  return 0;
}
