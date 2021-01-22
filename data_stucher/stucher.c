#include <stdio.h>
struct me{
  char name[20];
  int roll;
  float cgpa;
};
int main(){
  struct me mj;
  printf("Enter your name:\n");
  scanf("%s",mj.name);
  printf("Enter your roll:\n");
  scanf("%d",&mj.roll);
  printf("Enter your cgpa:\n");
  scanf("%f",&mj.cgpa);
  printf("name : %s ; roll : %d ; cgpa : %f\n",mj.name,mj.roll,mj.cgpa);
  return 0;
}
