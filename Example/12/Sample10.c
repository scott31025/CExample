#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp; 
   int test[NUM];
   int i, j;

   fp = fopen("test2.txt", "w");

   if(fp == NULL){
      printf("無法開啟檔案。\n");
      return 1;
   }
   else{
      printf("檔案開啟。\n");
   }

   printf("請輸入%d人的成績。\n", NUM);
   for(i=0; i<NUM; i++){
      scanf("%d",&test[i]);
   }

   for(j=0; j<NUM; j++){
      fprintf(fp, "No.%-5d%d\n", j+1, test[j]);
   }
   printf("寫入至檔案。\n");

   fclose(fp);
   printf("檔案關閉。\n");

   system("pause");
   return 0;
}
