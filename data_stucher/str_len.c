#include <stdio.h>
int main()
{
  char i[40];

  printf("enter the velues:\n");
  scanf("%s",i);

  int j = 0,count = 0;
  while (i[j] != '\0') {
    count++;
    j++;
  }
  printf("%d\n",count);
return 0;
}
