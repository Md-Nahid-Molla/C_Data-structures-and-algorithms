 #include <stdio.h>
 int main()
 {
   int a[4],b[4],ab[4];
   int i;

   printf("give a value : \n");
   for (i = 0;i < 4;i++){
     scanf("%d ",&a[i]);
   }
   printf("give b value : \n");
   for (i = 0;i < 4;i++){
     scanf("%d ",&b[i]);
   }
   for (i = 0;i < 4;i++){
     ab[i] = a[i] + b[i];
   }
    printf("valo sum ab : \n");
   for (i = 0;i < 4;i++){
      printf("%d ",ab[i]);
   }
   return 0;
 }
