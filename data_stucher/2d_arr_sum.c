#include <stdio.h>
int mani()
{
  int a[3][3],i,j;
  printf("Enter the array values : \n");
  for(i = 0;i < 3 ;i++){
    for(j = 0; j< 3;j++){
      scanf("%d ",&a[i][j]);
    }
  }
  for(i = 0;i < 3 ;i++){
    for(j = 0; j< 3;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
