#include <stdio.h>

int main(void)
{
   int num, sum;
   int i;

   num = 0;
   sum = 0;

   printf("�аݭn�D�q1�[�쨺�ӼƦr����M�O�H\n");
   scanf("%d", &num);

   for(i=1; i<=num; i++){
      sum += i; 
   }

   printf("�q1�[��%d����M��%d�C\n", num, sum);

   system("pause");
   return 0;
}
