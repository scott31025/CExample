#include <stdio.h>

int main(void)
{
   int res; 

   printf("�п�J��ơC\n");
   scanf("%d", &res);

   switch(res){
      case 1:
         printf("��J���O1�C\n");
         break;
      case 2:
         printf("��J���O2�C\n");
         break;
      default:
         printf("�п�J1��2�C\n");
         break;
   }

   system("pause");
   return 0;
}
