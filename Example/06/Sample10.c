#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("�аݭn�b�ĴX���פ�j��O�H�]1��10�^\n");

   scanf("%d", &res);

   for(i=1; i<=10; i++){
      printf("��%d�����B�z�C\n", i);
      if(i == res)
         break;
   }

   system("pause");
   return 0;
}

