#include <stdio.h>
#define DEBUG

int main(void)
{
   int i;
   int sum = 0;
   
   for(i=1; i<=5; i++){

      #ifdef DEBUG
         fprintf(stderr, "�ܼ�sum���Ȭ�%d�C\n", sum);
      #endif
      sum = i + sum;
   }
   printf("1��5����X�p�Ȭ�%d�C\n", sum);

   system("pause");
   return 0;
}
