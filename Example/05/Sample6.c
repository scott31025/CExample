#include <stdio.h>

int main(void)
{
   char res; 

   printf("�A�O�k�ͶܡH\n");
   printf("�п�JY��N�C\n");

   res = getchar();

   if (res == 'Y' || res == 'y'){
      printf("�A�O�k�ͳ�C\n");
     }
   else if(res == 'N' || res == 'n'){
      printf("�A�O�k�ͳ�C\n");
   }
   else{
      printf("�п�JY��N�C\n");
   }

   system("pause");
   return 0;
}
