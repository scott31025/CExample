#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("�n���L�ĴX�����B�z�H�]1��10�^\n");
   scanf("%d", &res);

   for(i=1; i<=10; i++){
      if(i == res)
         continue;
      printf("��%d�����B�z�C\n", i);
   }

   system("pause");
   return 0;
}
