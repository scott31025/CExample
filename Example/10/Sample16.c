#include <stdio.h>

/*max��ƪ��ŧi */
int max(int x, int y);

int main(void)
{
   int num1, num2, ans;
   int (*pM)(int x, int y);

   pM = max;

   printf("�п�J��1�ӼƭȡC\n");
   scanf("%d",&num1);

   printf("�п�J��2�ӼƭȡC\n");
   scanf("%d",&num2);

   ans = (*pM)(num1, num2);
   
   printf("�̤j�Ȭ�%d�C\n", ans);

   system("pause");
   return 0;
}

/* max��ƪ��w�q */
int max(int x, int y)
{
   if (x > y)
      return x;
   else 
      return y;
}
