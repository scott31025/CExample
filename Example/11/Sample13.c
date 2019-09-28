#include <stdio.h>

/* 列舉型態enum Week的宣告 */
typedef enum Week{SUN, MON, TUE, WED, THU, FRI, SAT} Week;

int main(void)
{
   Week w;
   w = SUN;

   switch(w){
      case SUN: printf("是星期天。\n"); break;
      case MON: printf("是星期一。\n"); break;
      case TUE: printf("是星期二。\n"); break;
      case WED: printf("是星期三。\n"); break;
      case THU: printf("是星期四。\n"); break;
      case FRI: printf("是星期五。\n"); break;
      case SAT: printf("是星期六。\n"); break;
      default: printf("不知道是星期幾。\n"); break;
   }

   system("pause");
   return 0;
}
