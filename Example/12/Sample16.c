#include <stdio.h>

int main(int argc, char *argv[])
{
   FILE *fp;
   int ch;

   if(argc != 2){
      printf("�Ѽƪ��ƥؤ��P�C\n");
      system("pause");
      return 1;
   }

   fp = fopen(argv[1], "r");

   if(fp == NULL){
      printf("�L�k�}���ɮסC\n");
      system("pause");
      return 1;
   }

   while((ch = fgetc(fp)) != EOF){
      putchar(ch);
   }

   fclose(fp);

   system("pause");
   return 0;
}
