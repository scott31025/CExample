#include <stdio.h>

int main(void)
{
   int res; 

   printf("�п�J���Z�C�]1��5�^\n");
   scanf("%d", &res);

   switch(res){
      case 1:
      case 2:
         printf("�٭n�[�j��I\n");
         break;
      case 3:
      case 4:
         printf("�N�ӳo�Ӽˤl�O���U�h�C\n");
         break;
      case 5:
         printf("�۷��u�q��I\n");
         break;
      default:
         printf("�n��J1��5�����Z�C\n");
         break;
   }
   
   system("pause");
   return 0;
}
