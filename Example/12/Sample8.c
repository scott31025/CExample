#include <stdio.h>

int main(void)
{
   FILE *fp; 

   fp = fopen("test1.txt", "w");

   if(fp == NULL){
      printf("�L�k�}���ɮסC\n");
      return 1;
   }
   else{
      printf("�ɮ׶}�ҡC\n");
   }

   fclose(fp);
   printf("�ɮ������C\n");

   system("pause");
   return 0;
}
