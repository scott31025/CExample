#include <stdio.h>

int main(void)
{
   char *str[3] = {"Hello", "GoodBye", "Thankyou"};
   int i;

   for(i=0; i<3; i++){
      printf("¦r¦ê¬°%s¡C\n", str[i]);
   }

   system("pause");
   return 0;
}
