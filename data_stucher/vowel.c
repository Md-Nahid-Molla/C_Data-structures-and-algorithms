#include <stdio.h>
int main()
{
  char ch;
  printf("give your char : \n");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    printf("It is vowel : %c\n",ch);
  }
  else{
    printf("it is not vowel.i mean consonent : %c\n",ch);
  }
  return 0;
}
