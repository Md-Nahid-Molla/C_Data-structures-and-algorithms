#include <stdio.h>
int main()
{
  int age;
  printf("Enter your age : \n");
  scanf("%d",&age);
  if(age<12){
    printf("your childen\n");
  }
  else if (age<20) {
    printf("Teeneger\n");
  }
  else if (age<30) {
  printf("Audalt\n");
  }
  else{
    printf("Your .....se\n");
  }
  return 0;
}
