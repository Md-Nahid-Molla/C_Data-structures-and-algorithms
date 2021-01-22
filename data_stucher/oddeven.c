#include<stdio.h>
int main()
{
  int input;
  printf("enter your number : ");
  scanf("%d",&input);
  if(input % 2 == 0){
    printf("EVEN number\n");
  }
  else{
    printf("ODD number\n");
  }
}
