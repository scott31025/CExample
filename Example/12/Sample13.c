#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int test[NUM] = {80,60,22,50,75};
   int i;

   fp = fopen("test1.bin", "wb");

   if(fp == NULL){
      printf("�L�k�}���ɮסC\n");
      system("pause");
      return 1;
   }

   for(i=0; i<NUM; i++){
      fwrite(&test[i], sizeof(int), 1, fp);
   }
   printf("�g�J�ɮסC\n");

   fclose(fp);

   system("pause");
   return 0;
}
