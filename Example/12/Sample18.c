#include <stdio.h>
int main(void)
{
   int i;
   int sum = 0;

   fprintf(stderr, "��l�X�ɮצW�١G%s\n", __FILE__);
   fprintf(stderr, "�ɮ׫إߤ���G%s\n", __DATE__);
   fprintf(stderr, "�ɮ׫إ߮ɶ��G%s\n", __TIME__);
   for(i=1; i<=5; i++){
      sum = i + sum;
   }
   printf("1��5����X�p�Ȭ�%d�C\n", sum);

   system("pause");
   return 0;
}
