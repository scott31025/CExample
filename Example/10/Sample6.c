#include <stdio.h>

/* avg函數的宣告 */
double avg(int *pT);

int main(void)
{
   int test[5];
   int i;
   double ans;

   printf("請輸入5個人的測驗成績。\n");

   for(i=0; i<5; i++){
      scanf("%d", &test[i]);
   }

   ans = avg(test);

   printf("5個人的平均成績為%lf分。\n", ans);

   system("pause");
   return 0;
}

/* avg函數的定義 */
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
