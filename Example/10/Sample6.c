#include <stdio.h>

/* avg��ƪ��ŧi */
double avg(int *pT);

int main(void)
{
   int test[5];
   int i;
   double ans;

   printf("�п�J5�ӤH�����禨�Z�C\n");

   for(i=0; i<5; i++){
      scanf("%d", &test[i]);
   }

   ans = avg(test);

   printf("5�ӤH���������Z��%lf���C\n", ans);

   system("pause");
   return 0;
}

/* avg��ƪ��w�q */
double avg(int * pT)
{
   int i;
   double sum;
   
   sum = 0.0;

   for(i=0; i<5; i++){
      sum += *(pT+i);
   }

   return sum/5;
}
