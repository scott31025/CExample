#include<stdio.h>

/* ���c���Astruct Car1���ŧi */
typedef struct Car1{
   int num;
   double gas;
   unsigned int tire : 3;
   unsigned int roof : 1;
   unsigned int color : 4;
}Car1;

/* ���c���Astruct Car2���ŧi */
typedef struct Car2{
   int num;
   double gas;
   unsigned int tire;
   unsigned int roof;
   unsigned int color;
}Car2;

int main(void)
{
   printf("�ϥΤF�줸�檺���c�A��j�p��%dbyte�C\n", sizeof(Car1));
   printf("���ϥΦ줸�檺���c�A��j�p��%dbyte�C\n", sizeof(Car2));

   system("pause");
   return 0;
}
