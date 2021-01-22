#include <stdio.h>
void swap(int *n1,int *n2) {
int tem = *(n1);
*(n1) = *(n2);
*(n2)  = tem;
}
int main()
{
  int num = 5,num2 = 10;
  printf("num = %d ,num2 = %d\n",num,num2);
  swap(&num,&num2);
  printf("num = %d ,num2 = %d\n",num,num2);
  return 0;
}
