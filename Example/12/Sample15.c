#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int num;
   int i;

   fp = fopen("test1.bin", "rb");

   if(fp == NULL){
      printf("無法開啟檔案。\n");
      return 1;
   }

   printf("要讀取第幾號資料？（1~5）\n");
   scanf("%d", &i);

   fseek(fp, (i-1)*sizeof(int), SEEK_SET);

   fread(&num, sizeof(int), 1, fp);

   printf("第%d號的資料為%d。\n", i, num);

   fclose(fp);

   system("pause");
   return 0;
}
