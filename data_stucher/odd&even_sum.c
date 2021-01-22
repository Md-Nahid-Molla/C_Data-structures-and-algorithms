#include <stdio.h>
int main()
{
  int a[5],even_sum = 0,odd_sum = 0;
  int i;
  printf("Enter your valu : \n");
  for(i = 1; i < 5;i++){
    scanf("%d ",&a[i]);
    if (a[i] % 2 == 0)
        even_sum = even_sum + a[i];
    else if (a[i] % 2 != 0) {
        odd_sum = odd_sum + a[i];
    }
  }
  printf("\n odd sum values : %d\n",odd_sum);
  printf("\n enve sum values : %d\n",even_sum);
  return 0;

}
