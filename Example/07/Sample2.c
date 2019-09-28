#include <stdio.h>

int main(void)
{
   int test[5];
   int i, j;

   printf("請輸入5個學生的分數。\n");

   for(i=0; i<5; i++){
      scanf("%d", &test[i]);
   }

   for(j=0; j<5; j++){
      printf("%d號學生的成績為%d分。\n", j+1, test[j]);
   }

   system("pause");
   return 0;
}
