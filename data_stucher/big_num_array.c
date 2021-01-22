#include <stdio.h>
int main()
{
  int a[5]= {12,14,13,13,46};
  int max = a[0],i;

  for(i = 1;i < 7;i++){
    if (a[i] > max)
      max =  a[i];

  }
  printf("big number is : %d\n",max);
  return 0;
}
