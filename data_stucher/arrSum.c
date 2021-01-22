#include <stdio.h>
int sum(int *a,int size){
  int i ,sum = 0;
  for (i = 0; i < size; i++) {
    /* code */
    sum = sum + *(a + i);
  }
  return sum;
}
int main()
{
  int arr[3] = {2,4,8};
  int result = sum(arr,3);
  printf("sum of array : %d\n",result);
  return 0;
}
