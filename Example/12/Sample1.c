#include <stdio.h>

int main(void)
{
   int i;
   double d;
   char str[100];

   printf("�п�J�@�Ӿ�ơC\n");
   scanf("%d", &i);

   printf("�п�J�@�Ӥp�ơC\n");
   scanf("%lf", &d);

   printf("�п�J�@�Ӧr��C\n");
   scanf("%s", str);

   printf("�ҿ�J����Ƭ�%d�C\n", i);
   printf("�ҿ�J���p�Ƭ�%lf�C\n", d);
   printf("�ҿ�J���r�ꬰ%s�C\n", str);

   system("pause");
   return 0;
}
