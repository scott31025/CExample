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
      printf("開啟檔案。\n");
   }

   fputs("Hello!\n", fp);
   fputs("Goodbye!\n", fp);
   printf("寫入至檔案。\n");

   fclose(fp);
   printf("關閉檔案。\n");

   system("pause");
   return 0;
}
