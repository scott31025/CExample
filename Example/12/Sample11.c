#include <stdio.h>
#define NUM 20

int main(void)
{
   FILE *fp; 
   char str1[NUM];
   char str2[NUM];

   fp = fopen("test1.txt", "r");

   if(fp == NULL){
      printf("無法開啟檔案。\n");
      return 1;
   }
   else{
      printf("檔案開啟。\n");
   }

   fgets(str1, NUM-1, fp);
   fgets(str2, NUM-1, fp);

   printf("寫入至檔案的字串為：\n");
   printf("%s", str1);
   printf("%s", str2);

   fclose(fp);
   printf("檔案關閉。\n");

   system("pause");
   return 0;
}
