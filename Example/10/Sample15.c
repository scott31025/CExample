#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char *str;
   int num, i;

   printf("要準備幾個a？\n");
   scanf("%d", &num);

   str = (char *) malloc (sizeof(char) * (num+1));
   if(!str){
      printf("無法配置記憶體。\n");
      return 1;
   }

   for(i=0; i<num; i++){
      *(str+i) = 'a';
   }
   *(str+num) = '\0';

   printf("準備了%s。\n", str);

   free(str);

   system("pause");
   return 0;
}
