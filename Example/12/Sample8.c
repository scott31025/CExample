#include <stdio.h>

int main(void)
{
   FILE *fp; 

   fp = fopen("test1.txt", "w");

   if(fp == NULL){
      printf("無法開啟檔案。\n");
      return 1;
   }
   else{
      printf("檔案開啟。\n");
   }

   fclose(fp);
   printf("檔案關閉。\n");

   system("pause");
   return 0;
}
