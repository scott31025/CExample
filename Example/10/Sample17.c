#include <stdio.h>

/*  ��ƪ��ŧi */
void show0(void);
void show1(void);
void show2(void);

int main(void)
{
   void (*pM[3])(void);
   int num;

   pM[0] = show0;
   pM[1] = show1;
   pM[2] = show2;

   printf("�n�I�s���@�إ�q�u��H�]0:�T���@1:�ɨ��@2:�����^\n");
   scanf("%d",&num);

   if(0<= num && num <= 2)
      (*pM[num])();
   
   system("pause");
   return 0;
}

/* ��ƪ��w�q */
void show0(void)
{
    printf("�T���C\n");
}
void show1(void)
{
    printf("�ɨ��C\n");
}
void show2(void)
{
    printf("�����C\n");
}

