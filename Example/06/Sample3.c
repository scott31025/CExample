#include <stdio.h>

int main(void)
{
   int num;
   int i;

   printf("�аݭn��X�X��*�H\n");
   scanf("%d", &num);

   for(i=1; i<=num; i++){
      printf("*");
   }
   printf("\n");

   system("pause");
   return 0;
}
