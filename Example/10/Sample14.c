#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[100];
   char str2[100];

   printf("�п�J��1�Ӧr��C\n");
   scanf("%s", str1);

   printf("�п�J��2�Ӧr��C\n");
   scanf("%s", str2);

   if(strcmp(str1, str2) == 0){
      printf("2�Ӧr��O�ۦP���C\n");
   }
   else
   {
      printf("�o2�Ӧr�ꤣ�@�ˡC\n");
   }

   system("pause");
   return 0;
}
