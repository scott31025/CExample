#include <stdio.h>

/* �@�P�Ŷ����Aunion Year���ŧi */
typedef union Year{
   int ad;
   int gengo; 
}Year;

int main(void)
{
   Year myyear;
   int a, g;

   printf("�п�J�褸�~���C\n");
   scanf("%d", &a);

   myyear.ad  = a;

   printf("�褸��%d�~�C\n", myyear.ad);
   printf("���ꬰ%d�~�C\n", myyear.gengo);

   printf("�п�J����~���C\n");
   scanf("%d",&g);

   myyear.gengo = g;

   printf("���ꬰ%d�~�C\n", myyear.gengo);
   printf("�褸��%d�~�C\n", myyear.ad);

   system("pause");
   return 0;
}
