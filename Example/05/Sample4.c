#include <stdio.h>

int main(void)
{
   int res; 

   printf("�п�J��ơC\n");
   scanf("%d", &res);

   if (res == 1){
      printf("��J���O1�C\n");
   }
   else if(res == 2){
      printf("��J���O2�C\n");
   }
   else{
      printf("�п�J1��2�C\n");
   }

   system("pause");
   return 0;
}
