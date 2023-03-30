#include <stdio.h>

   int main() {
      int day = 4;
         switch(day){
         case 1:
            printf("hoje é domingo - (%.1d)\n", day);
            break;
         case 2:
            printf("hoje é segunda - (%.1d)\n", day);
            break;
         case 3:
            printf("hoje é terça - (%.1d)\n", day);
            break;
         case 4:
            printf("hoje é quarta - (%.1d)\n", day);
            break;
         case 5:
            printf("hoje é quinta - (%.1d)\n", day);
            break;
            if (day >= 1 && day <= 5) {
               printf("é semana de trabalho\n - ");
            }
         case 6:
            printf("hoje é sexta - (%.1d)\n", day);
            break;
         case 7:
         	printf("hoje é sábado - (%.1d)\n", day);
            break;
            if (day >= 6 && day <= 7) {
               printf("é final de semana - \n"); 
            }
         default:
            printf("vc digitou um dia inválido\n");
         }
   return 0;
   }