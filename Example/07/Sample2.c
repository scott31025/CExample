#include <stdio.h>

int main(void)
{
   int test[5];
   int i, j;

   printf("�п�J5�Ӿǥͪ����ơC\n");

   for(i=0; i<5; i++){
      scanf("%d", &test[i]);
   }

   for(j=0; j<5; j++){
      printf("%d���ǥͪ����Z��%d���C\n", j+1, test[j]);
   }

   system("pause");
   return 0;
}
