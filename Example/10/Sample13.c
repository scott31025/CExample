#include <stdio.h>
#include <string.h>

int main(void)
{
   char str0[20];
   char str1[10];
   char str2[10];

   strcpy(str1,"Hello");
   strcpy(str2,"Goodbye");
   strcpy(str0,str1);
   strcat(str0,str2);

   printf("�}�Cstr1��%s�C\n", str1);
   printf("�}�Cstr2��%s�C\n", str2);
   printf("�G�Ӱ}�C�s���_�ӴN�ܦ�%s�C\n", str0);

   system("pause");
   return 0;
}
