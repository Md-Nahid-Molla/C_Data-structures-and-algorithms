#include <stdio.h>

int sum(int x,int y){
  int sum = x + y;
  return sum;
}
void hello() {//void is null value.
  printf("Hello mj nahid\n");
}
int main()
{
  hello();
  int result = sum(10,12);
  printf("Sum is : %d\n",result);
  return 0;
}
