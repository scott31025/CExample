#include <stdio.h>
#define NUM 20

int main(void)
{
   FILE *fp; 
   char str1[NUM];
   char str2[NUM];

   fp = fopen("test1.txt", "r");

   if(fp == NULL){
      printf("�L�k�}���ɮסC\n");
      return 1;
   }
   else{
      printf("�ɮ׶}�ҡC\n");
   }

   fgets(str1, NUM-1, fp);
   fgets(str2, NUM-1, fp);

   printf("�g�J���ɮת��r�ꬰ�G\n");
   printf("%s", str1);
   printf("%s", str2);

   fclose(fp);
   printf("�ɮ������C\n");

   system("pause");
   return 0;
}
