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
      printf("�}���ɮסC\n");
   }

   fputs("Hello!\n", fp);
   fputs("Goodbye!\n", fp);
   printf("�g�J���ɮסC\n");

   fclose(fp);
   printf("�����ɮסC\n");

   system("pause");
   return 0;
}
