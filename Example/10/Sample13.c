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

   printf("陣列str1為%s。\n", str1);
   printf("陣列str2為%s。\n", str2);
   printf("二個陣列連結起來就變成%s。\n", str0);

   system("pause");
   return 0;
}
