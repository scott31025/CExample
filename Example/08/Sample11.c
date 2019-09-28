#include <stdio.h>

int a = 0;

/* funcㄧ计﹚竡 */
void func(void)
{
   int b = 0;
   static int c = 0;

   printf("跑计a%d跑计b%d跑计c%d\n", a, b, c);

   a++;
   b++;
   c++;
}

/* mainㄧ计﹚竡 */
int main(void)
{
   int i;

   for(i=0; i<5; i++)
      func();

  system("pause");
  return 0;
}
