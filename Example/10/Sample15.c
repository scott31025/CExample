#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char *str;
   int num, i;

   printf("�n�ǳƴX��a�H\n");
   scanf("%d", &num);

   str = (char *) malloc (sizeof(char) * (num+1));
   if(!str){
      printf("�L�k�t�m�O����C\n");
      return 1;
   }

   for(i=0; i<num; i++){
      *(str+i) = 'a';
   }
   *(str+num) = '\0';

   printf("�ǳƤF%s�C\n", str);

   free(str);

   system("pause");
   return 0;
}
