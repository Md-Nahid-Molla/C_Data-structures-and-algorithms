#include <stdio.h>
#include <string.h>
int main()
{
  char n[] = "mj2";
  char m[] = "mj";
  int x = strcmp(n, m);
  if (x == 0) {
    printf("n and m is same.\n");
    }
  else{
    printf("n and m is not same.\n");
  }
  return 0;
}
