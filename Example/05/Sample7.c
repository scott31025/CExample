#include <stdio.h>

int main(void)
{
   int res;
   char ans;

   printf("�аݭn��������u�H\n");
   printf("�п�J��ơC\n");

   scanf("%d", &res);

   ans = (res==1) ? 'A' : 'B'; 

   printf("��ܪ��O%c���u�C\n", ans);

   system("pause");
   return 0;
}
