#include <stdio.h>

int a = 0; 

/* funcㄧ计﹚竡 */
void func(void)
{
   int c = 2;

   printf("funcㄧ计讽いㄏノ跑计a㎝跑计c\n");
   printf("跑计a%d\n", a);
   /* printf("跑计b%d\n", b); */
   printf("跑计c%d\n", c);
}

/* mainㄧ计﹚竡 */
int main(void)
{
   int b = 1;

   printf("mainㄧ计讽いㄏノ跑计a㎝跑计b\n");
   printf("跑计a%d\n", a);
   printf("跑计b%d\n", b);
   /* printf("跑计c%d\n", c); */

   func();

   system("pause");
   return 0;
}
