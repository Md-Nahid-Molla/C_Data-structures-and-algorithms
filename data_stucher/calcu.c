#include <stdio.h>

float add(float a,float b){
  return a+b;
}
float divi(float a,float b){
  return a/b;
}
float min(float a,float b){
  return a-b;
}
float miltypol(float a,float b){
  return a*b;
}


int main()
{
  float a,b;
  scanf("%f %f",&a,&b);
  float d = add(a,b);
  float i = divi(a,b);
  float n = min(a,b);
  float l = miltypol(a,b);
  printf("%f\n",d);
  printf("%f\n",i );
  printf("%f\n",n);
  printf("%f\n",l);


  return 0;
}
