#include <stdio.h>

/* �C�|���Aenum Week���ŧi */
typedef enum Week{SUN, MON, TUE, WED, THU, FRI, SAT} Week;

int main(void)
{
   Week w;
   w = SUN;

   switch(w){
      case SUN: printf("�O�P���ѡC\n"); break;
      case MON: printf("�O�P���@�C\n"); break;
      case TUE: printf("�O�P���G�C\n"); break;
      case WED: printf("�O�P���T�C\n"); break;
      case THU: printf("�O�P���|�C\n"); break;
      case FRI: printf("�O�P�����C\n"); break;
      case SAT: printf("�O�P�����C\n"); break;
      default: printf("�����D�O�P���X�C\n"); break;
   }

   system("pause");
   return 0;
}
