#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int num;
   int i;

   fp = fopen("test1.bin", "rb");

   if(fp == NULL){
      printf("�L�k�}���ɮסC\n");
      return 1;
   }

   printf("�nŪ���ĴX����ơH�]1~5�^\n");
   scanf("%d", &i);

   fseek(fp, (i-1)*sizeof(int), SEEK_SET);

   fread(&num, sizeof(int), 1, fp);

   printf("��%d������Ƭ�%d�C\n", i, num);

   fclose(fp);

   system("pause");
   return 0;
}
