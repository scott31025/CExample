#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM];
   int tmp;
   int i, j, s, t;

   printf("請輸入%d個學生的分數。\n", NUM);
   for(i=0; i<NUM; i++){
      scanf("%d", &test[i]);
   }

   for(s=0; s<NUM-1; s++){
      for(t=s+1; t<NUM; t++){
         if(test[t] > test[s]){
            tmp = test[t];
            test[t] = test[s];
            test[s] = tmp;
            
         }
      }
   }

   for(j=0; j<NUM; j++){
      printf("%d號學生的成績為%d分。\n", j+1, test[j]);
   }

   system("pause");
   return 0;
}
