#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp; 
   int test[NUM];
   int i, j;

   fp = fopen("test2.txt", "w");

   if(fp == NULL){
      printf("�L�k�}���ɮסC\n");
      return 1;
   }
   else{
      printf("�ɮ׶}�ҡC\n");
   }

   printf("�п�J%d�H�����Z�C\n", NUM);
   for(i=0; i<NUM; i++){
      scanf("%d",&test[i]);
   }

   for(j=0; j<NUM; j++){
      fprintf(fp, "No.%-5d%d\n", j+1, test[j]);
   }
   printf("�g�J���ɮסC\n");

   fclose(fp);
   printf("�ɮ������C\n");

   system("pause");
   return 0;
}
